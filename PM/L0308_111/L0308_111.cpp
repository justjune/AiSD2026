#include "L0308_111.hpp"

tree *find_minimum(tree *t) {
    tree *min; // Указатель на наименьший элемент 

    if (t == nullptr) return (nullptr);

    min = t;
    while (min->left != nullptr) {
        min = min->left;
    }

    return(min);
}