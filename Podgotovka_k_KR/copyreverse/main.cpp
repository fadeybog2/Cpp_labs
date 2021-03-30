#include<iostream>

using namespace std;

// Struct to store list element
typedef struct list_element {
    int value;                      // Element value
    struct list_element *next;      // Pointer to next element
    struct list_element *prev;    // Pointer to previous element
} list_element;

// Create new element, set its value to 'i', return pointer to new element
list_element *create_list_element(int i) {
    list_element *new_elem = new list_element;
    new_elem->value = i;
    new_elem->next = NULL;
    new_elem->prev = NULL;
    return new_elem;
}

// Insert element 'elem' into list 'root'
list_element *insert_into_list(list_element *root, list_element *elem) {
    if (elem == NULL)
        return root;

    elem->next = root;
    if (root != NULL)
        root->prev = elem;
    return elem;
}

// Print list
void print_list(list_element *root) {
    list_element *elem = root;
    while (elem != NULL) {
        cout << "Val = " << elem->value << endl;
        elem = elem->next;
    }
}

// Delete list
void delete_list(list_element *root) {
    list_element *elem = root;
    list_element *to_delete = NULL;
    while (elem != NULL) {
        to_delete = elem;
        elem = elem->next;
        if (to_delete != NULL)
            delete to_delete;
    }
}

// Implement this
list_element *copy_reverse(list_element *root) {
    list_element *a, *end= nullptr, *ai1, *ai2;
    if(root== nullptr) return nullptr;
    for (list_element *i = root; i != nullptr; i = i->next) {
        end = i;
    }
    a = new list_element;
    a->value = end->value;
    a->prev = nullptr;
    a->next = nullptr;
    if(root->next== nullptr)return a;
    ai1 = new list_element;
    a->next = ai1;
    ai1->value = end->prev->value;
    ai1->prev = a;
    for (list_element *i = end->prev->prev; i != nullptr; i = i->prev) {
        ai2 = new list_element;
        ai2->value = i->value;
        ai2->prev = ai1;
        ai2->next= nullptr;
        ai1->next = ai2;
        ai1 = ai2;
    }
    return a;
}


int main() {
    int i;
    int n;
    int tmp;
    list_element *root = NULL;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> tmp;
        list_element *elem = create_list_element(tmp);
        root = insert_into_list(root, elem);
    }

    cout << "List:" << endl;
    print_list(root);

    list_element *copy = copy_reverse(root);
    cout << "Copy:" << endl;
    print_list(copy);

    delete_list(copy);
    delete_list(root);
    return 0;
}