#include <sstream>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int alen = 0, blen=0, tmp;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int *a = (int *) malloc(sizeof(int));
    int *b = (int *) malloc(sizeof(int));
    while (!ss.eof()) {
        ss >> tmp;
        if(tmp%2==0){
            a[alen] = tmp;
            alen++;
            a = (int*)realloc(a, (alen+1)*sizeof(int));
        }else{
            b[blen] = tmp;
            blen++;
            b = (int*)realloc(b, (blen+1)*sizeof(int));
        }

    }
    sort(a, a + alen);
    sort(b, b + blen);
    for (int i = 0; i < alen; i++) {
        cout << a[i] << " ";
    }
    for (int i = 0; i < blen; i++) {
        cout << b[i] << " ";
    }
    return 0;
}
