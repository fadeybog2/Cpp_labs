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

int PopFirst(List* l){
    int ret = l->root->data;
    l->root = l->root->next;
    return ret;
}

void PrintAll(List* l){
    for(Node* i=l->root; i!= NULL; i = i->next){
        cout<<i->data<<' ';
    }
}

void Clear(List* l){
    for(Node* i=l->root; i!= NULL; i = i->next){
        delete i;
    }
    delete l;
}

Node* mergeLists(){

}

int main()
{
    List* a = new List;
    return 0;
}
