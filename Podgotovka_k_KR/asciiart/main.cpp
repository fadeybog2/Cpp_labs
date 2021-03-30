#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    for (int i = 0; i < m; i++) {
        cout<<"*";
    }
    cout<<endl;
    for (int i = 1; i < n-1; i++) {
        cout<<"*";
        for (int j = 1; j < m-1; j++) {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for (int i = 0; i < m; i++) {
        cout<<"*";
    }
    return 0;
}
