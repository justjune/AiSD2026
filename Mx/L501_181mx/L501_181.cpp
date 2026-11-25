#include "L501_181.hpp"
using namespace std;

int bin_search(item_type s[], item_type key, int low, int high) {
    if (low > high) { //проверка
        return -1;
    }

    int middle = (low + high) / 2; // середина

    if (s[middle] == key) {
        return middle;
    }
    if (s[middle] > key) {
        return bin_search(s, key, low, middle - 1); //слева
    }
    else {
        return bin_search(s, key, middle + 1, high); //справа
    }
}

int bin_search(item_type s[], item_type key, int n) {
    return bin_search(s, key, 0, n - 1);
}