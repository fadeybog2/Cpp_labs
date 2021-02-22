#include <iostream>

using namespace std;

void fun(int num){
    if(num>=60){
        fun(num/60);
        cout<<'.';
        num=num%60;
    }
    while(num>0){
        if(num>=10){
            cout<<'<';
            num-=10;
        }else{
            cout<<'v';
            num--;
        }
    }

}

int main()
{
    int n;
    cin>>n;
    fun(n);
    return 0;
}
