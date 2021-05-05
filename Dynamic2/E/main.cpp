#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> v(n, 0), k(n);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    v[0] = 1;
    for (int i = 0; i < n - 1; i++) {
        v[i+1] += v[i]%937;
        if (i + k[i] < n && k[i] != 1) v[i + k[i]] += v[i]%937;
    }
    cout << v.back()%937;
    return 0;
}
