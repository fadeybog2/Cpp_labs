#include <iostream>
#include <vector>

using namespace std;

vector<int> sort(vector<int> a, int size) {
    if (size == 1)return a;
    int rsize = size / 2, lsize = size - rsize;
    vector<int> l, r, ans;
    for (int i = 0; i < lsize; i++) {
        l.push_back(a[i]);
    }
    for (int i = lsize; i < size; i++) {
        r.push_back(a[i]);
    }
    l = sort(l, lsize);
    r = sort(r, rsize);
    for (int i = 0, j = 0, k = 0; i < lsize || j < rsize; k++) {
        if (i == lsize)ans.push_back(r[j++]);
        else if(j==rsize)ans.push_back(l[i++]);
        else if(l[i]>r[j])ans.push_back(r[j++]);
        else ans.push_back(l[i++]);
    }
    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    array = sort(array, n);
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    return 0;
}
