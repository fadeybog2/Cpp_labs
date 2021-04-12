#include <iostream>
using namespace std;

struct Appointment{
    int patient_id;
    int time;
    Appointment* prev;
    Appointment* next;
};

Appointment* create_list_element(int id, int time)
{
    Appointment* new_elem = new Appointment;
    new_elem->patient_id = id;
    new_elem->time = time;
    new_elem->next = NULL;
    new_elem->prev = NULL;
    return new_elem;
}

void print_list(Appointment* root)
{
    Appointment* elem = root;
    while(elem != NULL) {
        cout << elem->patient_id << " " << elem->time << endl;
        elem = elem->next;
    }
}

Appointment* insert_into_list(Appointment* root, Appointment* elem)
{
    if(elem == NULL)
        return root;
    Appointment* elem1 = root;
    if (elem1 == NULL)
    {
        elem->next = NULL;
        elem->prev = NULL;
        return elem;
    }
    while (elem1->next != NULL)
    {
        elem1 = elem1->next;
    }
    elem->next = NULL;
    elem1->next = elem;
    elem->prev = elem1;
    return root;
}



void delete_list(Appointment* root)
{
    Appointment* elem = root;
    Appointment* to_delete = NULL;
    while(elem != NULL) {
        to_delete = elem;
        elem = elem->next;
        // if(to_delete != NULL)
        {
            delete to_delete;
        }
    }
}

bool extend_appointment(Appointment** root, int id){
    Appointment* t3 = *root,*t1, *t2, *t4, *t5;
    while(t3->patient_id != id){
        if(t3->next == nullptr)return false;
        t3=t3->next;
    }
    t1 = t3->prev;
    t2 = create_list_element(t3->patient_id, t3->time-1);
    t4 = create_list_element(t3->patient_id, t3->time+1);
    t5 = t3->next;
    t2->next = t3;
    t3->prev = t2;
    if(t1 == nullptr){
        *root = t2;
    }else{
        t1->next = t2;
        t2->prev = t1;
    }
    t4->prev = t3;
    t3->next = t4;
    if(t5 != nullptr){
        t3->next = t4;
        t4->prev = t3;
        t4->next = t5;
        t5->prev = t4;
    }
    return true;
}

int main()
{
    Appointment* root = NULL;

    for(unsigned int i = 0; i < 3; i++)
    {
        Appointment* elem = create_list_element(i, 10*i);
        root = insert_into_list(root, elem);
    }

    if (extend_appointment(&root, 1))
        print_list(root);
    else
        cout << "NO" << endl;

    // Должно напечататься
    // 0 0
    // 1 9
    // 1 10
    // 1 11
    // 2 20

    delete_list(root);
    return 0;
}
