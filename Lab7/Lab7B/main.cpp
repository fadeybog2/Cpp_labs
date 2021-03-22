#include <iostream>
using namespace std;
int fn(int a){
    if(a>=10){
        return fn(a/10);
    }else{
        return a;
    }
}

int main() {
    int n, a, f, g = 0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>a;
        f=0;
        if(a%4==0){
            if(fn(a)!=4 && fn(a)!=5){
                f=1;
                g=1;
            }
        }
        if(a%7==0){
            if(fn(a)!=1 && fn(a)!=7){
                f=1;
                g=1;
            }
        }
        if(a%9==0){
            if(fn(a)!=9 && fn(a)!=8){
                f=1;
                g=1;
            }
        }
        if(f==1)cout<<a<<endl;
    }
    if(g==0){
        cout<<0;
    }
    return 0;
}
