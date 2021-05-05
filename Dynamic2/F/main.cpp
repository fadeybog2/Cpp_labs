#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

int main() {
    int t, n;
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> g, d(4);
    for (n = 0; !ss.eof(); n++) {
        ss >> t;
        g.push_back(t);
    }
    sort(g.begin(), g.end());
    d[2] = g[1] - g[0];
    d[3] = g[2] - g[0];
    for (int i = 4; i <= g.size(); i++) {
        d.push_back(min(d[i-1], d[i-2]) + g[i-1] - g[i-2]);
    }
    cout << d[n];
    return 0;
}
