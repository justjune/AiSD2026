#include "L0501_183.h"

int binary_search(const item_type s[], item_type key, int low, int high) {
    if (low > high) {
        return -1; 
    }

    int middle = low + (high - low) / 2;

    if (s[middle] == key) {
        return middle;
    }

    if (s[middle] > key) {
        return binary_search(s, key, low, middle - 1);
    }
    else {
        return binary_search(s, key, middle + 1, high);
    }
}