#include <iostream>
#include <stack>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    stack <int> a;
    string line;
    getline(cin, line);
    stringstream str(line);
    int b, c;
    str>>b>>c;
    a.push(b);
    a.push(c);
    str>>line;
    while(!str.eof()){
        if(line=="+"){
            b=a.top();
            a.pop();
            c=a.top();
            a.pop();
            a.push(b+c);

        }else if(line=="-"){
            c=a.top();
            a.pop();
            b=a.top();
            a.pop();
            a.push(b-c);

        }else if(line=="*"){
            b=a.top();
            a.pop();
            c=a.top();
            a.pop();
            a.push(b*c);

        }else if(line=="/"){

            c=a.top();
            a.pop();
            b=a.top();
            a.pop();
            a.push(b/c);
        }else{
            a.push(stoi(line));
        }
        str>>line;
    }
    if(line=="+"){
            b=a.top();
            a.pop();
            c=a.top();
            a.pop();
            a.push(b+c);
        }else if(line=="-"){
            c=a.top();
            a.pop();
            b=a.top();
            a.pop();
            a.push(b-c);

        }else if(line=="*"){
            b=a.top();
            a.pop();
            c=a.top();
            a.pop();
            a.push(b*c);

        }else if(line=="/"){
            c=a.top();
            a.pop();
            b=a.top();
            a.pop();
            a.push(b/c);
        }else{
            a.push(stoi(line));
        }
        str>>line;
    cout <<a.top();
    return 0;
}
