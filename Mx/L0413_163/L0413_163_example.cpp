//Черев алексей МЕН-250705
#include <iostream>
#include "L0413_163.h"

int main() {
    item_type arr[] = { 7, 2, 1, 6, 8, 5, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "array before separation: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    int pivot_index = partition(arr, 0, n - 1);


    std::cout << "separator index after algorythm: " << pivot_index << '\n';
    std::cout << "separator value: " << arr[pivot_index] << '\n';

    std::cout << "array after separation: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    std::cin.get();

    return 0;
}