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
        //prevnode = curnode;
        curnode = nextnode;
    }
    curnode->next = fnode;
    prevnode = curnode;
    curnode = fnode;

    //cout<<"Created!"<<endl;
    while(n>1){
        //cout<<"n = "<<n<<endl;
        for(int i = 1; i < k; i++){
            //cout<<"current "<<curnode->data<<endl;
            prevnode = curnode;
            curnode = curnode->next;
        }
        //cout<<n;
        nextnode = curnode->next;
        //cout<<"delete "<<curnode->data<<endl;
        delete curnode;
        curnode = nextnode;
        prevnode->next = curnode;
        n--;
    }
    cout<<curnode->data;
    return 0;
}
