#include<vector>
#include<chrono>
#include<random>
#include<iostream>
#include<algorithm>
#include<cassert>
#include<fstream>
#include<string>

using namespace std;
using namespace std::chrono;

constexpr int max_value = 100000;

//символ "&" позволяет менять непосредственно ту переменную, которая передана в функцию
//как питоновский объект
//это замена указателя в современном c++
void bubble_sort(vector<int> &v) {
    for (int i = 0; i < v.size() - 1; i++)
        for (int j = 0; j < v.size() - i - 1; j++)
            if (v[j] > v[j + 1])
                swap(v[j], v[j + 1]);
}

void gnome_sort(vector<int> &v) {
    for (int i = 0; i < v.size();) {
        if (i == 0 || v[i - 1] <= v[i]) i++;
        else swap(v[i--], v[i - 1]);
    }
}

void merge_sort(vector<int> &v) {
    if (1 < v.size()) {
        vector<int> array1(v.begin(), v.begin() + v.size() / 2);
        merge_sort(array1);
        vector<int> array2(v.begin() + v.size() / 2, v.end());
        merge_sort(array2);
        merge(array1.begin(), array1.end(), array2.begin(), array2.end(), v.begin());
    }
}

void heap_sort(vector<int> &v) {
    make_heap(v.begin(), v.end());
    for (auto i = v.end(); i != v.begin(); --i) {
        pop_heap(v.begin(), i);
    }
}

void std_sort(vector<int> &v) {
    sort(v.begin(), v.end());
}

void stupid_sort(vector<int> &v) {
    for (int i = 1; i < v.size(); i++) {
        if (v[i] < v[i - 1]) {
            swap(v[i], v[i - 1]);
            i = 0;
        }
    }
}

vector<int> generate_random_vector(uint64_t n) {

    vector<int> ret(n);

    //это математически строгий и надежный способ генерировать случайные числа
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, max_value);

    for (int i = 0; i < n; ++i) {
        ret[i] = dist(gen);
    }

    return ret;
}


//это магическая строчка
//благодаря этому функция может принимать аргумент произвольного типа
//название для конкретно этого типа вы придумываете сами (я назвал его SortFunction)
template<typename SortFunction>
int benchmark(SortFunction f, uint64_t n, int type) {
    auto v = generate_random_vector(n);
    switch (type) {
        case 0:
            f(v);
            break;
        case 1:
            break;
        case 2:
            sort(v.begin(), v.end(), greater<int>());
            break;
    }

    auto start = steady_clock::now();
    //время засекается внутри этого блока
    f(v);
    auto finish = steady_clock::now();

    //это проверка на то, верно ли проведена сортировка
    //в случае ошибки программа падает с сообщением "assertion failed"
    assert(is_sorted(begin(v), end(v)));

    //возвращаем время работы в мс
    return duration_cast<nanoseconds>(finish - start).count();
}

template<typename SortFunction>
void fileoutput(string name, SortFunction f, int max_number, int points, int iterations) {
    double step = max(max_number / (points*1.0),1.0);
    ofstream fout("C:\\Users\\Fadey\\Documents\\GitHub\\Cpp_labs\\sort\\sort_graphics\\"+name + "_sort.csv", ios_base::out);
    fout << "number";
    fout << ",time_" << name << "\n";
    for (double i = step; i <= max_number; i += step) {
        fout << i;
        uint64_t best = 0, average = 0, worst = 0;
        cout <<name<<" "<< i << " ";
        for (int j = 1; j <= iterations; j++) {
            //best += benchmark(f, i, 0);
            average += benchmark(f, i, 1);
            //worst += benchmark(f, i, 2);
        }
        //best /= iterations;
        average /= iterations;
        ///worst /= iterations;
        fout<<","<<average<<"\n";
        //fout << "," << best<< "," << average<< "," << worst<< "\n";
        cout << best<< " " << average<< " " << worst << endl;
    }

}

int main() {
    /*cout << benchmark(bubble_sort, 1000) << endl;
    cout << benchmark(gnome_sort, 1000) << endl;
    cout << benchmark(merge_sort, 1000) << endl;
    cout << benchmark(std_sort, 1000) << endl;
    cout << benchmark(heap_sort, 1000) << endl;
    cout << benchmark(stupid_sort, 1000) << endl;*/
    int a = 100, points = 20;

    fileoutput("stupid", stupid_sort, a, points, 10000);
    fileoutput("bubble", bubble_sort, a, points, 100000);
    fileoutput("gnome", gnome_sort, a, points, 100000);
    fileoutput("heap", heap_sort, a, points, 100000);
    fileoutput("merge", merge_sort, a, points, 100000);
    fileoutput("quick", std_sort, a, points, 100000);
    return 0;
}
