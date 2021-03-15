#ifndef SUBFORWARDLIST_SUBFORWARDLIST_H
#define SUBFORWARDLIST_SUBFORWARDLIST_H
struct subforwardlist {
    int data;
    subforwardlist* next = nullptr;
};
bool init(subforwardlist **sfl); //инициализация пустого недосписка
bool push_back(subforwardlist **sfl, int d); //добавление элемента в конец недосписка
int pop_back(subforwardlist **sfl); //удаление элемента с конца недосписка
bool push_forward(subforwardlist **sfl, int d); //добавление элемента в начало недосписка
int pop_forward(subforwardlist **sfl); //удаление элемента из начала недосписка
bool push_where(subforwardlist **sfl, unsigned int where, int d); //добавление элемента с поряд-
//ковым номером where
bool erase_where (subforwardlist **sfl, unsigned int where); //удаление элемента с порядковым номером where
unsigned int size(subforwardlist **sfl); //определить размер недосписка
void clear(subforwardlist **sfl); //очистить содержимое недосписка
bool init_from_file(subforwardlist **sfl, char* filename); //инициализировать недосписок из фай
#endif //SUBFORWARDLIST_SUBFORWARDLIST_H
