#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    double r,s=0;
    cin>>n;
    for(int i=0;i<n; i++){
        cin>>r;
        s+=r*r;
    }
    printf("%.4f", sqrt(s));
    return 0;
}
