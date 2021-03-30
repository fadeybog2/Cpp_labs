#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin>>n;
    vector<vector<int>> train(n, vector<int>(2, 0));
    for (int i = 0; i < n; i++) {
        cin>>train[i][0]>>train[i][1];
    }
    cin>>m;
    for (int i = 0; i < n / 2; i++) {
        train[i+1][1] += train[i][1];
        train[i][1] = 0;
        for (int j = i+1; j < n-1; j++) {
            if(train[j][0]+train[j][1]>m){
                train[j+1][1] += train[j][0]+train[j][1]-m;
                train[j][1] = m - train[j][0];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout<<train[i][0]<<" "<<train[i][1]<<endl;
    }
    return 0;
}
