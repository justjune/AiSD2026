// Подобытько Владимир ПМ-2
// Алгоритм рекурсивного поиска произвольного элемента в дереве
#include "L0307_110.hpp" 

tree *search_tree(tree *l, item_type x) {              //Функция принимает указатель на корень дерева (поддерева) 
    if (l == nullptr) return nullptr;                  //И возвращает указатель на требуемый узел
    if (l->item == x) return l;
    if (x < l->item) return search_tree(l->left, x);
    return search_tree(l->right, x);
}