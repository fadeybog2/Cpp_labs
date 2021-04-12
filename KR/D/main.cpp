#include <iostream>

using std::cin;
using std::cout;
using std::endl;

struct Employee {
    char name[20];
    bool is_male;
    int position_id;
    double salary;
    long int phone_number;
};

bool is_equal_salary(Employee *e, unsigned int n) {
    double a=0, b=0;
    int c=0, d=0;
    bool result;
    for (int i = 0; i < n; i++) {
        if(e[i].is_male){
            a+=e[i].salary;
            c++;
        }else{
            b+=e[i].salary;
            d++;
        }
    }
    a/=c;
    b/=d;
    return (abs(a-b)/std::min(a, b)<=0.05);
}

// Здесь будет ваша реализация функции

int main() {
    Employee stat[5] = {
            {"Alice",   false, 130, 200.0, 5550712},
            {"Bob",     true,  130, 300.0, 5550734},
            {"Charlie", true,  150, 150.0, 5550988},
            {"Daniel",  true,  220, 180.0, 5550821},
            {"Emma",    false, 150, 230.0, 5550988}
    };
    cout << is_equal_salary(stat, 5) << endl; // ваша функция должна вернуть true
    return 0;
}