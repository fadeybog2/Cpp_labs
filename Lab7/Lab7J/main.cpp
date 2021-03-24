#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
int maxraz;
void radix_int(vector <int> arr) {
    for (int raz = 0; raz<maxraz; raz++) {
        vector <vector <int>> b(2, vector <int> (0));
        for(int i=0;i<arr.size();i++){
            int figure = (arr[i]/pow(10,raz));
            figure = figure%10;
            b[figure].push_back(arr[i]);
        }
        arr.clear();

        for (int i = 0; i < b[0].size(); i++) {
            arr.push_back(b[0][i]);
        }
        for (int i = 0; i < b[1].size(); i++) {
            arr.push_back(b[1][i]);
        }
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<< " ";
        }
        cout<<endl;
    }
}

int main() {
    vector <int> a;
    int tmp,len;
    string input;
    getline(cin, input);
    stringstream ss(input);
    for (len=0;!ss.eof(); len++) {
        ss >> tmp;
        a.push_back(tmp);
        maxraz = max(maxraz, (tmp==0? 1: int (log10 (tmp) + 1)));
    }
    radix_int(a);
    return 0;
}
