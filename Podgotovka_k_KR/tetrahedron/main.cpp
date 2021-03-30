#include <iostream>

using namespace std;

int main() {
    double a[4][3];
    double v[3][3];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            v[i][j] = a[i + 1][j] - a[0][j];
        }
    }
    double v0 = v[0][0] * v[1][1] * v[2][2] + v[0][1] * v[1][2] * v[2][0] + v[1][0] * v[2][1] * v[0][2];
    v0 -= v[0][2] * v[1][1] * v[2][0] + v[0][1] * v[1][0] * v[2][2] + v[1][2] * v[2][1] * v[0][0];
    v0 = ((v0>0)?v0:-v0)/6;
    printf("%.4f", v0);
    return 0;
}
