#include <iostream>
using namespace std;

double find_root(double(*f)(double arg), double a, double b, double tol){
    double m = (a+b)/2;;
    while(f(m)>1e-6||-f(m)>1e-6){
        if(f(m)>0) b=m;
        else if(f(m)<0) a=m;
        m = (a+b)/2;
    }
    return m;
}

double foo(double x){
    return -4+55*x;
}
int main() {
    cout<<find_root(foo, -100, 100, 1);
    return 0;
}
