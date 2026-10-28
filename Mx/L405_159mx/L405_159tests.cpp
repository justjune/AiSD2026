#include <iostream>
#include "L405_159.hpp"
using namespace std;

void print_array(const item_type s[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << s[i];
        if (i + 1 < n) cout << " ";
    }
    cout << "\n";
}

int main() {
    item_type a[] = { 5, 2, 9, 1, 5, 6, 3, 8, 4, 7 };
    int n1 = sizeof(a) / sizeof(a[0]);
    cout << "Before: ";
    print_array(a, n1);
    merge_sort(a, n1);
    cout << "After: ";
    print_array(a, n1);

    return 0;
}