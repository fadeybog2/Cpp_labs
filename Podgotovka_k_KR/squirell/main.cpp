#include <iostream>
#include <cmath>

using namespace std;
int main() {
    double H, Vx;
    cin>>H>>Vx;
    printf("%.4f", Vx*sqrt(2*H/9.81));
    return 0;
}
