#include <iostream>

using namespace std;
int main() {
    int n, sum =0, tmp;
    cin>>n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>tmp;
            if(i+j==n-1)sum+=tmp;
        }
    }
    cout<<sum;
    return 0;
}
