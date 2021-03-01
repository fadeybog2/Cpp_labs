#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack <int> a;
    int b, c;
    char d;
    cin>>b>>c;
    a.push(b);
    a.push(c);
    cin>>d;
    while(a.size()>0){
        //if(d==' ') cin>>d;
        switch (d){
        case '+':
            b=a.top();
            a.pop();
            c=a.top();
            a.pop();
            a.push(b+c);
            cout<<"+ ";
            break;
        case '-':
            b=a.top();
            a.pop();
            c=a.top();
            a.pop();
            a.push(b-c);
            cout<<"- ";
            break;
        case '/':
            b=a.top();
            a.pop();
            c=a.top();
            a.pop();
            a.push(b/c);
            cout<<"/ ";
            break;

        case '*':
            b=a.top();
            a.pop();
            c=a.top();
            a.pop();
            a.push(b*c);
            cout<<"* ";
            break;
        default:
            a.push(d - '0');
            cout<<"def "<<d - '0'<<endl;
        }
        //cout<<b<<" "<<c<<" ";

        cout<<a.top()<<" "<<endl;
        cin>>d;
    }
    cout <<a.top()<<"  "<< a.size() << endl;
    return 0;
}
