#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long int answers[50];
    answers[0] = 1;
    answers[1] = 2;
    answers[2] = 4;
    for (int i = 3; i <= 50; i++) {
        answers[i] = answers[i - 1] + answers[i - 2] + answers[i - 3];
    }
    cout << answers[n];
    return 0;
}
