#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, x, MX, DX;
    double dx, mx = 0, mx2 = 0;
    cin >> x;
    for (n = 0; x != 0; n++) {
        mx += x;
        mx2 += (x * x);
        cin >> x;
    }
    mx /= n;
    MX = round(mx * 1000);
    mx2 /= n;
    DX = round((mx2 - mx * mx) * 1000);
    mx = (MX + 0.0) / 1000;
    dx = (DX + 0.0) / 1000;
    if (MX % 1000 == 0) {
        printf("%.1f ", mx);
    } else if (MX % 100 == 0) {
        printf("%.1f ", mx);
    } else if (MX % 10 == 0) {
        printf("%.2f ", mx);
    } else {
        printf("%.3f ", mx);
    }
    if (DX % 1000 == 0) {
        printf("%.1f ", dx);
    } else if (DX % 100 == 0) {
        printf("%.1f ", dx);
    } else if (DX % 10 == 0) {
        printf("%.2f ", dx);
    } else {
        printf("%.3f ", dx);
    }
    return 0;
}
