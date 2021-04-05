#include <iostream>
#include <vector>

using namespace std;

vector<int> sort(vector<int> a) {
    if (a.size() == 1) return a;
    vector<int> l, r, ans;
    for (int i = 0; i < a.size() - a.size() / 2; i++) l.push_back(a[i]);
    for (int i = l.size(); i < a.size(); i++) r.push_back(a[i]);
    l = sort(l), r = sort(r);
    for (int i = 0, j = 0, k = 0; i < l.size() || j < r.size(); k++) {
        if (i == l.size() || (l[i] > r[j] && j < r.size())) ans.push_back(r[j++]);
        else ans.push_back(l[i++]);
    }
    return ans;
}

vector<int> clear_dubles(vector<int> a) {
    for (int i = 0; i < a.size()-1; i++) {
        if (a[i] == a[i + 1])a.erase(a.begin() + i--);
    }
    return a;
}

int main() {
    int n, m, t;
    cin >> n >> m;
    vector<int> a, b;
    for (int i = 0; i < n; i++) {
        cin >> t;
        a.push_back(t);
    }
    for (int i = 0; i < m; i++) {
        cin >> t;
        b.push_back(t);
    }
    a = sort(a);
    b = sort(b);
    a=clear_dubles(a);
    b=clear_dubles(b);
    if (a == b) cout << "Yes";
    else cout << "No";
    return 0;
}
