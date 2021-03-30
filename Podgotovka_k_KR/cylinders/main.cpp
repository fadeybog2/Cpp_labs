#include <iostream>

using namespace std;

int main() {
    int n, maxnum = 0;
    double max = 0, mas, rad, den, h;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>rad>>h>>den;
        mas = h*rad*rad*den;
        if(mas>max){
            max = mas;
            maxnum = i;
        }
    }
    cout<<maxnum;
    return 0;
}
