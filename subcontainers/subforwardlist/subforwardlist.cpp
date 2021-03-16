#include "subforwardlist.h"
bool init(subforwardlist **sfl) {
    *sfl = nullptr;
    return true;
} //инициализация пустого недосписка
bool push_back(subforwardlist **sfl, int d) {
    subforwardlist *a = *sfl;
    subforwardlist *b = new subforwardlist;
    b->data = d;
    if (*sfl == nullptr) {
        *sfl = b;
        return true;
    }
    while (a->next != nullptr) {
        a = a->next;
    }
    a->next = b;
    return true;
} //добавление элемента в конец недосписка
int pop_back(subforwardlist **sfl) {
    subforwardlist *a = *sfl;
    subforwardlist *b;
    if (a == nullptr)return 0;
    if (a->next == nullptr) {
        *sfl = nullptr;
        int ret = a->data;
        delete a;
        return ret;
    }
    while (a->next != nullptr) {
        b = a;
        a = a->next;
    }
    int ret = a->data;
    delete a;
    b->next = nullptr;
    return ret;
} //удаление элемента с конца недосписка
bool push_forward(subforwardlist **sfl, int d) {
    subforwardlist *a = new subforwardlist;
    a->data = d;
    if (*sfl == nullptr) {
        *sfl = a;
        return true;
    }
    a->next = *sfl;
    *sfl = a;
    return true;
} //добавление элемента в начало недосписка
int pop_forward(subforwardlist **sfl) {
    if (*sfl == nullptr)return 0;
    int ret = (*sfl)->data;
    subforwardlist *del = *sfl;
    *sfl = (*sfl)->next;
    delete del;
    return ret;
} //удаление элемента из начала недосписка
bool push_where(subforwardlist **sfl, unsigned int where, int d) {
    if (where == 0) return push_forward(sfl, d);
    subforwardlist *pre, *cur, *nex;
    pre = *sfl;
    nex = pre->next;
    for (int i = 1; i < where; i++) {
        pre = nex;
        nex = nex->next;
    }
    cur = new subforwardlist;
    cur->data = d;
    cur->next = nex;
    pre->next = cur;
    return true;
} //добавление элемента с поряд-
//ковым номером where
bool erase_where(subforwardlist **sfl, unsigned int where) {
    if (where == 0) {
        subforwardlist *del = *sfl;
        *sfl = (*sfl)->next;
        delete del;
        return true;
    }
    subforwardlist *pre, *cur, *nex;
    cur = *sfl;
    for (int i = 0; i < where; i++) {
        pre = cur;
        cur = cur->next;
        nex = cur->next;
    }
    pre->next = nex;
    //cur->next = nullptr;
    delete cur;
    //cur->next = nullptr;
    //cur = nullptr;
    return true;
} //удаление элемента с порядковым номером where
unsigned int size(subforwardlist **sfl) {
    if (*sfl == nullptr) return 0;
    subforwardlist *a = *sfl;
    unsigned int i;
    for (i = 1; a->next != nullptr; i++) {
        a = a->next;
    }
    return i;
} //определить размер недосписка
void clear(subforwardlist **sfl) {
    subforwardlist *a = *sfl;
    subforwardlist *b;
    if(a == nullptr) return;
    while (a->next != nullptr) {
        b = a;
        a = a->next;
        delete b;
    }
    delete a;
    *sfl = nullptr;
} //очистить содержимое недосписка
bool init_from_file(subforwardlist **sfl, char *filename); //инициализировать недосписок из фай