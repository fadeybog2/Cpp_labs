#include <iostream>

using std::cout;
using std::cin;
using std::boolalpha;

#include <vector>
void reverse_memories(int *begin, unsigned int n) {
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = begin[i];
    }
    for (int i = 0; i < n; i++) {
        begin[i] = a[n-i-1];
    }
}

int main() {
    int memories[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    reverse_memories(memories, 10);
    for (unsigned int i = 0; i < 10; i++)
        cout << memories[i] << " ";
    cout << std::endl; // должно вывести: 10 9 8 7 6 5 4 3 2 1

    return 0;
}