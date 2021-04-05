#include <iostream>
#include <vector>

using namespace std;
vector<vector<int>> sort(vector<vector<int>> a) {
    if (a.size() == 1) return a;
    vector<vector<int>> l, r, ans;
    for (int i = 0; i < a.size() - a.size() / 2; i++) l.push_back(a[i]);
    for (int i = l.size(); i < a.size(); i++) r.push_back(a[i]);
    l = sort(l), r = sort(r);
    for (int i = 0, j = 0, k = 0; i < l.size() || j < r.size(); k++) {
        if (i == l.size()) ans.push_back(r[j++]);
        else if(j == r.size()) ans.push_back(l[i++]);
        else if (l[i][0] > r[j][0]) ans.push_back(r[j++]);
        else ans.push_back(l[i++]);
    }
    return ans;
}

vector<int> indices_sort(const vector<int> v){
    vector<vector<int>> a(v.size(), vector<int>(2));
    vector<int> ans;
    for (int i = 0; i < v.size(); i++) {
        a[i][0] = v[i];
        a[i][1] = i;
    }
    a = sort(a);
    for (int i = 0; i < a.size(); i++) {
        ans.push_back(a[i][1]);
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    vector<int> a(n), b;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    b=indices_sort(a);
    for (int i = 0; i < n; i++) {
        cout<<b[i]<<" ";
    }
    return 0;
}
