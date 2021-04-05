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

int main() {
    int k, sum = 0;
    cin >> k;
    vector<int> a(k);
    for (int i = 0; i < k; i++) {
        cin >> a[i];
    }
    a = sort(a);
    for (int i = 0; i < k/2+1; i++) {
        sum+=a[i]/2+1;
    }
    cout<<sum;
    return 0;
}
