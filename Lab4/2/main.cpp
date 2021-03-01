#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

struct List{
    Node* root = NULL;
};

void PushBack(List* l, int val){
    Node* i = l->root;
    if(i == NULL){
        Node* a = new Node;
        a->data = val;
        a->next = NULL;
        l->root = a;
    }else{
        while(i->next != NULL){
            i = i->next;
        }
        Node* a = new Node;
        a->data = val;
        a->next = NULL;
        i->next = a;
    }
}

void InsertMiddle(List* l, int val){
    Node* i = l->root;
    if(i == NULL){
        Node* a = new Node;
        a->data = val;
        a->next = NULL;
        l->root = a;
    }else{
        int len = 0;
        while(i->next != NULL){
            i = i->next;
            len++;
        }
        Node* a = new Node;
        i = l->root;
        for(int j=0; j < len/2; j++){
            i = i->next;
        }
        a->data = val;
        a->next = i->next;
        i->next = a;
    }
}

int PopFirst(List* l){
    int ret = l->root->data;
    l->root = l->root->next;
    return ret;
}

void PrintAll(List* l){
    for(Node* i=l->root; i!= NULL; i = i->next){
        cout<<i->data<<' ';
    }
    cout<<endl;
}

void Clear(List* l){
    for(Node* i=l->root; i!= NULL; i = i->next){
        delete i;
    }
    delete l;
}

int main()
{
    List* a = new List;
    int n, b;
    cin>>n;
    for(int i = 0; i < n; i++){
        char tmp;
        cin>>tmp;
        switch(tmp){
            case '+':
                cin>>b;
                PushBack(a, b);
                break;
            case '*':
                cin>>b;
                InsertMiddle(a, b);
                break;
            case '-':
                cout<<PopFirst(a)<<endl;
                break;
        };
        //PrintAll(a);
    }
    return 0;
}
