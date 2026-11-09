// Данная папка не является листингом, но реализуется с целью
// объявления стуктуры и необходимых для создания тестов функций
#include "L0306_110.hpp"

tree* create_node(item_type x) {
    tree* n = new tree;
    n->item = x;
    n->parent = n->left = n->right = nullptr;
    return n;
}

tree* insert_tree(tree* root, item_type x) {
    if (!root) return create_node(x);
    if (x < root->item) {
        root->left = insert_tree(root->left, x);
        root->left->parent = root;
    } 
    else if (root->item < x) {
        root->right = insert_tree(root->right, x);
        root->right->parent = root;
    }
    return root;  
}