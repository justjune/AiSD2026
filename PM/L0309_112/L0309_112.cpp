// Подобытько Владимир ПМ-2
// Рекурсивный алгоритм симметричного обхода двоичного дерева
#include "L0309_112.hpp"
#include <iostream>

void traverse_tree(tree *l) {
    if (l != nullptr) {
    traverse_tree(l->left);
    std::cout << (l->item) << std::endl;
    traverse_tree(l->right);
    }
}