#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, c;
    cin >> n;
    vector<int> d(100), a(100);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        d[i] = 1;
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i] && d[j] + 1 > d[i])
                d[i] = d[j] + 1;
        }
    }
    int ans = d[0];
    for (int i = 1; i < n; ++i) {
        if (d[i] > ans)ans = d[i];
    }
    cout << ans;
    return 0;
}
