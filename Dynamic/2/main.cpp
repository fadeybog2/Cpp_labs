#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

bool foo(vector<int> v, int n, int ans) {

    if (n == v.size()) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i];
        }
        if (ans == sum)return true;
        else return false;
    }

    vector<int> v1 = v;
    v1[n] *= -1;
    if (foo(v1, n + 1, ans) || foo(v, n + 1, ans))return true;
    return false;
}

int main() {
    int a;
    cin >> a;
    string line;
    vector<int> v;
    getline(cin, line);
    getline(cin, line);
    stringstream ss(line);
    for (int i = 0; !ss.eof(); i++) {
        int tmp;
        ss >> tmp;
        if(!ss.eof())v.push_back(tmp);
    }
    cout << (foo(v, 0, a)?"YES":"NO");
    return 0;
}
