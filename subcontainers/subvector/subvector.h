#ifndef SUBVECTOR_SUBVECTOR_H
#define SUBVECTOR_SUBVECTOR_H
struct subvector {
    int *mas = NULL;
    unsigned int top = 0;
    unsigned int capacity = 0;
};
bool init(subvector *qv); //инициализация пустого недовектора
bool push_back(subvector *qv, int d); //добавление элемента в конец недовектора
//с выделением дополнительной памяти при необходимости
int pop_back(subvector *qv); //удаление элемента с конца недовектора
bool resize(subvector *qv, unsigned int new_capacity); //увеличить емкость недовектора
void shrink_to_fit(subvector *qv); //очистить неиспользуемую память
void clear(subvector *qv); //очистить содержимое недовектора, занимаемое место
//при этом не меняется
void destructor(subvector *qv); //очистить всю используемую память, инициализировать
//недовектор как пустой
bool init_from_file(subvector *qv, char *filename); //инициализировать недовектор из файла
#endif //SUBVECTOR_SUBVECTOR_H
