//Черев алексей МЕН-250705
#include <iostream>
#include "L0501_183.h"

int main() {
    
    item_type arr[] = { 1, 3, 5, 7, 9, 11, 13, 15 };
    int n = sizeof(arr) / sizeof(arr[0]);

    item_type key = 9;

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n" << "searching for value" << key << "\n";
    

    
    int index = binary_search(arr, key, 0, n - 1);

    std::cout << "value " << key << " found on position: " << index << '\n';

    std::cin.get();

    return 0;
}