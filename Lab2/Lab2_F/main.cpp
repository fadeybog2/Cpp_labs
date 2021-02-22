#include <iostream>

using namespace std;

int main()
{
    int m=0, num, tmp;
    do{
        cin>>tmp;
        if(tmp>m){
            m=tmp;
            num=0;
        }
        if(tmp==m) num++;
    }while(tmp!=0);
    cout << num << endl;
    return 0;
}
