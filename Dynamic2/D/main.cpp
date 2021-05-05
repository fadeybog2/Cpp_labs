#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, c;
    cin >> n;
    vector<int> f(n), p(n), t;
    vector<vector<int>> way(n);
    for (int i = 0; i < n; i++) {
        cin >> f[i];
    }
    p = f;
    way[0] = vector<int>(1, 0);
    way[1] = vector<int>(1, 1);
    for (int i = 2; i < n; i++) {

        if (p[i - 1] < p[i - 2])
            t = way[i - 1];
        else
            t = way[i - 2];
        t.push_back(i);
        way[i] = t;
        p[i] += min(p[i - 1], p[i - 2]);
    }
    cout << p[n-1]<<endl;
    for (int i = 0; i < way[n-1].size(); i++) {
        cout<<way[n-1][i]<<" ";
    }
    return 0;
}
