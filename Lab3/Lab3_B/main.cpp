#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, k, x, y;
    cin>>n>>m>>k;
    vector<vector<int>> a(n, vector<int>(m, 0));
    for(int i=0;i<k; i++){
        cin>>x>>y;
        a[x-1][y-1] = -1;
    }
    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            if(a[i][j]==0){
                for(int r=i-1; r<=i+1; r++){
                    for(int t=j-1; t<=j+1; t++){
                        if(r>=0&&r<n&&t>=0&&t<m){
                            if(a[r][t]==-1){
                                a[i][j]++;
                            }
                        }
                    }
                }
            }
        }
    }
    for(int i=0; i< n; i++){
        for(int j=0; j < m; j++){
            cout << a[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
