#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string line;
    vector<vector<int>> v;
    for (int i = 0; getline(cin, line); i++) {
        stringstream ss(line);
        v.resize(v.size() + 1);
        while (!ss.eof()) {
            char t;
            ss >> t;
            if (!ss.eof())
                v[i].push_back(t - '0');
        }
    }
    int ans = 0;
    for (int i = 1; i <= v.size(); i++) {//форма x
        for (int j = 1; j <= v[0].size(); j++) {//форма y
            for (int k = 0; k <= v.size() - i; k++) {//координата верхнего левого угла по x
                for (int l = 0; l <= v[0].size() - j; l++) {//координата верхнего левого угла по y
                    int s = 1;
                    for (int m = k; m < k + i; m++) {//непосредственно x клетки
                        for (int n = l; n < l + j; n++) {//непосредственно y клетки
                            s *= v[m][n];
                        }
                    }
                    if (s == 1) ans++;
                }
            }
        }
    }
    cout << ans;
    return 0;
}
