#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n_x, n_y, k, x, y, f, sum=0;
    cin >> n_x >> n_y >> k;
    vector <vector<int>> a(n_x, vector<int>(n_y, 0));
    for (int i = 0; i < k; i++) {
        cin >> x >> y;
        a[x][y] = 1;
    }
    for (int i = 0; i < n_x; i++) {
        for (int j = 0; j < n_y; j++) {
            if (a[i][j] == 1) {
                f = -2;
                for (int l = 0; l < n_x; l++) {
                    f += a[l][j];
                }
                for (int l = 0; l < n_x; l++) {
                    f += a[i][l];
                }
                if(f>0)sum++;
            }
        }
    }
    cout<<sum;
    return 0;
}
