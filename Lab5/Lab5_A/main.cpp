#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> a;
    int b, c;
    cin>>b;
    while(b != 0){
        if(b>0){
            a.push(b);
        }else if(b<0 && !a.empty()){
            if(-b >= a.top()){
                a.pop();
            }else if(-b < a.top()){
                c = a.top();
                a.pop();
                a.push(c + b);
            }
        }
    cin>>b;
    }
    a.empty()? b=-1:b=a.top();
    cout << a.size() <<" "<<b<< endl;
    return 0;
}
