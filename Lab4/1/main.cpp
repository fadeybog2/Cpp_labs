#include <iostream>

using namespace std;

struct Node{
    int64_t value;
    Node* next;
};

void PushBack(Node* current_node, int64_t value){
    Node* i = current_node;
    while(i->next != NULL){
            i = i->next;
    }
    Node* a = new Node;
    a->value = value;
    a->next = NULL;
    i->next = a;
}

Node* mergeLists(Node* first_node, Node* second_node){

}

int main()
{

    return 0;
}
