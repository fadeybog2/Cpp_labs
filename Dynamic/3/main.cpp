#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    string line;
    vector<int> v;
    getline(cin, line);
    getline(cin, line);
    stringstream ss(line);
    for (int i = 0; !ss.eof(); i++) {
        int tmp;
        ss >> tmp;
        //if(!ss.eof())
            v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    int x=0;
    for (int i = 1; i < v.size(); i++) {
        if(v[i] - v[i-1]<=n)x = v[i];
        else x+=n;
    }
    cout<<x;
    return 0;
}
