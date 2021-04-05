#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

vector<int> sort(vector<int> a, int size) {
    if (size == 1)return a;
    int rsize = size / 2, lsize = size - rsize;
    vector<int> l, r, ans;
    for (int i = 0; i < lsize; i++) {
        l.push_back(a[i]);
    }
    for (int i = lsize; i < size; i++) {
        r.push_back(a[i]);
    }
    l = sort(l, lsize);
    r = sort(r, rsize);
    for (int i = 0, j = 0, k = 0; i < lsize || j < rsize; k++) {
        if (i == lsize || (l[i] > r[j] && j<rsize))ans.push_back(r[j++]);
        else ans.push_back(l[i++]);
    }
    return ans;
}

int main() {
    string s;
    getline(cin,s);
    stringstream is(s);
    int n;
    vector<int> a, b;
    while(is >> n)
    {
        a.push_back(n);
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i]!=0) b.push_back(a[i]);
    }
    b=sort(b, b.size());
    for (int i = 0, j=0; i < a.size(); i++) {
        if (a[i]!=0) cout<<b[j++]<<" ";
        else cout<<0<<" ";
    }
    return 0;
}
