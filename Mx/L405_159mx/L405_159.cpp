#include "L405_159.hpp"

void merge(item_type s[], int low, int middle, int high) {
    int n = high - low + 1;

    item_type* dops = new item_type[n];

    int i = low;
    int j = middle + 1;
    int k = 0;

    while (i <= middle && j <= high) {  //сливаем два
        if (s[i] <= s[j]) {
            buffer[k++] = s[i++];
        }
        else {
            dops[k++] = s[j++];
        }
    }
    while (i <= middle) { //если правый все, а левый нет
        buffer[k++] = s[i++];
    }
    while (j <= high) { //аналогично
        dops[k++] = s[j++];
    }
    for (int t = 0; t < n; ++t) {
        s[low + t] = dops[t];
    }

    delete[] dops;
}

void merge_sort(item_type s[], int low, int high) {
    if (low < high) {
        int middle = (low + high) / 2;
        merge_sort(s, low, middle);
        merge_sort(s, middle + 1, high);
        merge(s, low, middle, high);
    }
}
