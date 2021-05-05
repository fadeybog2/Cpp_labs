#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> y(n), p(n);
    for (int i = 0; i < n; i++) {
        cin >> y[i];
    }
    p[0] = 0;
    p[1] = abs(y[1]-y[0]);
    for (int i = 2; i < n; i++) {
        p[i] = min(p[i-1] + abs(y[i]-y[i-1]), p[i-2] + 3*abs(y[i]-y[i-2]));
    }
    cout << p.back();
    return 0;
}
