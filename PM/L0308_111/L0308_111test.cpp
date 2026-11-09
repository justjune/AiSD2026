#include "L0308_111.hpp"
#include <iostream>

int main() {

    tree* root = nullptr;
    int values[] = {5, 3, 8, 1, 4, 7, 9};
    for (int v : values) root = insert_tree(root, v);

    size_t errors = 0;

    if(find_minimum(root)->item == 2) errors++;
    if(find_minimum(root)->item != 1) errors++;
    if (errors == 0){
        std::cout << "L0308_111: all tests passed" << std::endl;}

    return 0;
}