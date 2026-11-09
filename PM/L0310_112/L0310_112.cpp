// Подобытько Владимир ПМ-2
// Вставка узла в двоичное дерево поиска
#include "L0310_112.hpp"

void insert_node(tree **l, item_type x, tree *parent) {
    tree *p;  // временный указатель

    if (*l == nullptr) {
        p = new tree;
        p->item = x;
        p->left = p->right = nullptr;
        p->parent = parent;
        *l = p;
        return;
    }

    if (x < (*l)->item) {
        insert_node(&((*l)->left), x, *l);
    } else {
        insert_node(&((*l)->right), x, *l);
    }
}