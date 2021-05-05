#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long int answers[50];
    answers[0] = 1;
    answers[1] = 3;
    for (int i = 2; i <= 50; i++) {
        answers[i] = 2*answers[i - 1] + 2*answers[i - 2];
    }
    cout << answers[n];
    return 0;
}
