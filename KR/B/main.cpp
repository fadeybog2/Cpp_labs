#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double m, k, f, g = 9.8;
    cin>>m>>k>>f;
    cout<<ceil((k*m*g)/f);
    return 0;
}
