#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main() {
    int n;
    double norm, s=0;
    cin>>n;
    vector<vector<double>> a(n, vector<double>(3, 0));
    vector<vector<double>> b(n, vector<double>(3, 0));
    for (int i = 0; i < n; i++) {
        cin>>a[i][0]>>a[i][1]>>a[i][2];
    }
    for (int i = 1; i < n; i++) {
        b[i][0] = a[i][0] - a[i-1][0];
        b[i][1] = a[i][1] - a[i-1][1];
        b[i][2] = a[i][2] - a[i-1][2];
    }
    cin>>norm;
    for (int i = 0; i < n; i++) {
        s+=sqrt(b[i][0]*b[i][0]+b[i][1]*b[i][1]+b[i][2]*b[i][2]);
        if(s>=norm){
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}
