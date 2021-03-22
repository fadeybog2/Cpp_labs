#include <iostream>

using namespace std;

int main() {
    int a, b, x, c, d, ans;
    cin >> a >> b >> c >> d >> x;
    if (a + x == b && c * x == d) {
        ans = 5;
    } else if (a + x == b || c * x == d) {
        ans = 4;
    } else if (x == 1024) {
        ans = 3;
    } else {
        ans = 2;
    }
    cout << ans << endl;
    return 0;
}
