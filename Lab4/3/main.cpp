#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

int main()
{
    int n, k;
    Node* prevnode, *curnode, *nextnode, *fnode;
    cin>>n>>k;
    curnode = new Node; //first node
    curnode->data = 1;
    fnode = curnode;
    for(int i = 2; i <= n; i++){
        Node* nextnode = new Node;
        nextnode->data = i;
        curnode->next = nextnode;
        curnode = nextnode;
    }
    curnode->next = fnode;
    prevnode = curnode;
    curnode = fnode;

    while(n>1){
        for(int i = 1; i < k; i++){
            prevnode = curnode;
            curnode = curnode->next;
        }
        nextnode = curnode->next;
        delete curnode;
        curnode = nextnode;
        prevnode->next = curnode;
        n--;
    }
    cout<<curnode->data;
    return 0;
}
