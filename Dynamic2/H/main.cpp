#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, x, y, ans = 0;
    char stolb;
    cin >> n;
    vector<vector<int>> pole(8, vector<int>(8, 0)), var(8, vector<int>(8, 0));
    for (int i = 0; i <= n; i++) {
        cin >> stolb >> y;
        y--;
        switch(stolb){
            case 'a': x = 0;break;
            case 'b': x = 1;break;
            case 'c': x = 2;break;
            case 'd': x = 3;break;
            case 'e': x = 4;break;
            case 'f': x = 5;break;
            case 'g': x = 6;break;
            case 'h': x = 7;break;
        }
        if(i==n)pole[x][y] = -1;
        else pole[x][y] = 1;
    }
    if(y==7){
        cout<<1;
        return 0;
    }
    var[x][y] = 1;
    for (int j = y; j < 7; j++) {
        for (int i = 0; i < 8; i++) {
            if(var[i][j]){
                if(i>0 && pole[i-1][j+1] == 1) var[i-1][j+1] += var[i][j];
                if(i<7 && pole[i+1][j+1] == 1) var[i+1][j+1] += var[i][j];
                if(pole[i][j+1] == 0) var[i][j+1] += var[i][j];
            }
        }
    }
    for (int i = 0; i < 8; i++) {
        ans+=var[i][7];
    }
    cout<<ans;
    return 0;
}
