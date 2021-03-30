#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    double x, y, f, fx=0, fy=0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>x>>y>>f;
        fx+=f*x/sqrt(x*x + y*y);
        fy+=f*y/sqrt(x*x + y*y);
    }
    printf("%.4f %.4f", fx, fy);
    return 0;
}
