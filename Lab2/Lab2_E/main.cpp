#include <iostream>

using namespace std;

int main()
{
    int ans=0,tmp;
    do{
        cin>>tmp;
        if(tmp%2==0&&tmp>ans) ans=tmp;
    }while(tmp!=0);
    cout << ans << endl;
    return 0;
}
