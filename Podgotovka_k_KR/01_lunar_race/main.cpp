#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, v, s;
    cin>>a>>v>>s;
    if(s/v>sqrt(2*s/a)) cout<<1;
    else cout<<2;
    return 0;
}
