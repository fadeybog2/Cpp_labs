#include <iostream>

using namespace std;

int main() {
    int n, max, tmp, ans = 1;
    cin>>n;
    cin>>max;
    for (int i = 1; i < n; i++) {
        cin>>tmp;
        if(tmp>max){
            max=tmp;
            ans=1;
        }else if(tmp==max) ans++;
    }
    cout<<ans;
    return 0;
}
