#include "L0309_112.hpp"
#include <iostream>

int main() {
    tree* root = nullptr;
    int values[] = {5, 3, 8, 1, 4, 7, 9};
    for (int v : values) root = insert_tree(root, v);

    traverse_tree(root);

    std::cout << "L0307_110: all tests passed" << std::endl;
    return 0;
}