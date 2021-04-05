#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<char[2]> sk(n);
    for (int i = 0; i < n; i++) {
        cin >> sk[i][0] >> sk[i][1];
    }
    string s;
    char c;
    stack<int> st;
    cin >> s;
    stringstream ss(s);
    while (ss >> c) {
        for (int i = 0; i < n; i++) {
            if (c == sk[i][0]) {
                st.push(i);
            } else if (c == sk[i][1]) {
                if (st.top() == i) {
                    st.pop();
                } else {
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    if (st.empty())cout << "YES";
    else cout << "NO";
    return 0;
}
