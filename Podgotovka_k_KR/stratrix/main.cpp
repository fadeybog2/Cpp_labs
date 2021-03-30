#include <iostream>

using namespace std;

struct StrangeMatrix {
    int first_line[3];
    int second_line[3];
    int third_line[3];
};

StrangeMatrix transpose(StrangeMatrix m) {
    StrangeMatrix a;
    a.first_line[0] = m.first_line[0];
    a.first_line[1] = m.second_line[0];
    a.first_line[2] = m.third_line[0];
    a.second_line[0] = m.first_line[1];
    a.second_line[1] = m.second_line[1];
    a.second_line[2] = m.third_line[1];
    a.third_line[0] = m.first_line[2];
    a.third_line[1] = m.second_line[2];
    a.third_line[2] = m.third_line[2];
    return a;
}

int main() {
    StrangeMatrix b;
    for (int i = 0; i < 3; i++) {
        cin >> b.first_line[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> b.second_line[i];
    }
    for (int i = 0; i < 3; i++) {
        cin >> b.third_line[i];
    }
    b = transpose(b);
    for (int i = 0; i < 3; i++) {
        cout << b.first_line[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 3; i++) {
        cout << b.second_line[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < 3; i++) {
        cout << b.third_line[i]<<" ";
    }
    cout<<endl;
    return 0;
}
