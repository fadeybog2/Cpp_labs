#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, t, ans = 0;
    map<int, int> tapki;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        if (t < 0) {
            tapki[-t] = i;
        } else if (tapki.count(t)) {
            if (ans == 0)ans = i - tapki.find(t)->second;
            else ans = min(ans, i - tapki.find(t)->second);
        }
    }
    cout << ans << endl;
    return 0;
}
