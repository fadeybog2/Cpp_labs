#include <iostream>
#include <string>

using namespace std;

struct House {
    int role;
    string name;
    House *next;
    int mynews = -1;
};

int main() {
    int n, k, news, m;
    //char name[10];
    House *prev, *cur, *next, *f;
    cin >> n >> news;
    cur = new House; //first node
    cin >> cur->name >> cur->role;
    f = cur;
    for (int i = 2; i <= n; i++) {
        House *next = new House;
        cin >> next->name >> next->role;
        cur->next = next;
        cur = next;
    }
    cur->next = f;
    prev = cur;
    cur = f;
    cin >> m;
    cur->mynews = news;
    for (int i = 0; i < m&&(cur->next !=cur); i++) {
        next = cur->next;
        if (cur->role == 0) {
            cur->next->mynews = 1 + (-1) * cur->mynews;
            if(cur->next->mynews == 1){
                cur->role =1;
            }
        }else if (cur->role == 1) {
            cur->next->mynews = cur->mynews;
            if(cur->mynews == false){
                prev->next = next;
                if(f==cur)f = f->next;
                delete cur;
                n--;
                cur = prev;
                next = cur->next;
            }
        }
        prev = cur;
        cur= next;
    }
    cur = f;
    for(int i = 0; i<n; i++){
        cout << cur->name << " " << cur->role<<endl;
        cur = cur->next;
    }

    return 0;
}