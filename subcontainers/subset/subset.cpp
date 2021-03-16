#include <iostream>
#include "subset.h"

bool init(subset_node **sn) {
    *sn = nullptr;
    return true;
} //инициализация пустого дерева
bool insert(subset_node **sn, int k) {
    if (insert_r(sn, k) == nullptr) return false;
    return true;
} //добавление элемента в дерево, дубли игнорировать
bool remove(subset_node **sn, int k) {
    if (*sn == nullptr) return false;
    remove_r(sn, k);
    return true;
} //удаление элемента из дерева
subset_node *find(subset_node *sn, int k) {
    if (sn == nullptr || k == sn->key) return sn;
    if (k > sn->key) return find(sn->right, k);
    else return find(sn->left, k);
} //поиск элемента в дереве
unsigned int size(subset_node *sn) {
    if (sn != nullptr) {
        return 1 + size(sn->left) + size(sn->right);
    }
    return 0;
} //количество элементов в дереве
unsigned int height(subset_node *sn) {
    if (sn == nullptr) {
        return 0;
    }
    return std::max(height(sn->right), height(sn->left)) + 1;
} //высота дерева
void destructor(subset_node *sn) {
    if (sn != nullptr) {
        destructor(sn->left);
        destructor(sn->right);
    }
    delete sn;
} //очистить всю используемую память
int *DFS(subset_node *sn) {
    int *ret = new int[size(sn)];
    int len = 0;
    DFS_r(sn, ret, &len);
    return ret;
} //обход в глубину, возвращает указатель на массив
int *BFS(subset_node *sn) {
    int *ret = new int[size(sn)];
    int len = 0;
    BFS_r(sn, ret, &len);
    return ret;
} //обход в ширину, возвращает указатель на массив
subset_node *merge(subset_node *sn1, subset_node *sn2); // слияние двух деревьев

subset_node *insert_r(subset_node **sn, int k) {
    if (*sn == nullptr) {
        *sn = new subset_node;
        (*sn)->key = k;
        return *sn;
    } else if ((*sn)->key < k) {
        (*sn)->right = insert_r(&(*sn)->right, k);
    } else if ((*sn)->key > k) {
        (*sn)->left = insert_r(&(*sn)->left, k);
    }
    return *sn;
}

subset_node *remove_r(subset_node **sn, int k) {
    if (*sn == nullptr) {
        return *sn;
    } else if ((*sn)->key < k) {
        (*sn)->right = remove_r(&(*sn)->right, k);
    } else if ((*sn)->key > k) {
        (*sn)->left = remove_r(&(*sn)->left, k);
    } else if ((*sn)->left != nullptr && (*sn)->right != nullptr) {
        (*sn)->key = minimum(&(*sn)->right)->key;
        (*sn)->right = remove_r(&(*sn)->right, (*sn)->key);
    } else {
        subset_node *del;
        del = *sn;
        if ((*sn)->left != nullptr) {
            *sn = (*sn)->left;
        } else if ((*sn)->right != nullptr) {
            *sn = (*sn)->right;
        } else *sn = nullptr;
        delete del;
    }
    return *sn;
}

subset_node *minimum(subset_node **sn) {
    if ((*sn)->left == nullptr) return *sn;
    return minimum(&(*sn)->left);
}

void DFS_r(subset_node *sn, int *arr, int *len) {
    if (sn != nullptr) {
        DFS_r(sn->left, arr, len);
        arr[*len] = sn->key;
        (*len)++;
        DFS_r(sn->right, arr, len);
    }
}

void BFS_r(subset_node *sn, int *arr, int *len) {
    if (sn != nullptr) {
        BFS_r(sn->left, arr, len);
        arr[*len] = sn->key;
        *len++;
        BFS_r(sn->right, arr, len);
    }
}
