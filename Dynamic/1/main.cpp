#include <iostream>

using namespace std;

int rec(int a) {
    int sum = 0;
    if (a == 0) return 1;
    if (a > 0) sum += rec(a - 1);
    if (a > 1) sum += rec(a - 2);
    if (a > 2) sum += rec(a - 3);
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << rec(n);
    return 0;
}
