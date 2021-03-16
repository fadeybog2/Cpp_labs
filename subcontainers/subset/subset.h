#ifndef SUBSET_SUBSET_H
#define SUBSET_SUBSET_H
struct subset_node { // дерево поиска “subset”
    int key;
    subset_node *left = nullptr;
    subset_node *right = nullptr;
    //subset_node *parent = nullptr;
}; // можете добавлять дополнительные поля и структуры данных (например, для BFS)
bool init(subset_node **sn); //инициализация пустого дерева
bool insert(subset_node **sn, int k); //добавление элемента в дерево, дубли игнорировать
bool remove(subset_node **sn, int k); //удаление элемента из дерева
subset_node* find(subset_node *sn, int k); //поиск элемента в дереве
unsigned int size(subset_node *sn); //количество элементов в дереве
unsigned int height(subset_node *sn); //высота дерева
void destructor(subset_node *sn); //очистить всю используемую память
int* DFS (subset_node *sn); //обход в глубину, возвращает указатель на массив
int* BFS (subset_node *sn); //обход в ширину, возвращает указатель на массив
subset_node* merge(subset_node *sn1, subset_node *sn2); // слияние двух деревьев

subset_node *insert_r(subset_node **sn, int k);
subset_node *remove_r(subset_node** sn, int k);
subset_node *minimum(subset_node **sn);
void DFS_r(subset_node *sn, int *arr, int* len);
void BFS_r(subset_node *sn, int *arr, int* len);
#endif //SUBSET_SUBSET_H
