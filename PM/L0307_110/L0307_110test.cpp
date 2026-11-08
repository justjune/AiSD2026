#include "L0307_110.hpp"
#include <iostream>

int main() {
    tree* root = nullptr;
    int values[] = {5, 3, 8, 1, 4, 7, 9};
    for (int v : values) root = insert_tree(root, v);

    size_t errors = 0;

    if(search_tree(root, 4) == nullptr) errors++;
    if(search_tree(root, 6) != nullptr) errors++;

    if (errors == 0)
        std::cout << "L0307_110: all tests passed" << std::endl;

    return 0;
}