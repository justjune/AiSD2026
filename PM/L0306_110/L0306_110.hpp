#ifndef L0306_110_HPP
#define L0306_110_HPP

using item_type = int;

struct tree {
    item_type item;    // Элемент данных 
    tree* parent;      // Указатель на родительский узел 
    tree* left;        // Указатель на левый дочерний узел 
    tree* right;       // Указатель на правый дочерний узел 
};

tree* create_node(item_type x);
tree* insert_tree(tree* root, item_type x);

#endif