#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    cout<<a[n/2]<<" ";
    for (int i = 1; i < n/2+1; i++) {
        cout<<a[n/2-i]<<" ";
        cout<<a[n/2+i]<<" ";
    }
    return 0;
}
