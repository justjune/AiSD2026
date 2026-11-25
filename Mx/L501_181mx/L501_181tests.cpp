#include <iostream>
#include "L501_181.hpp"
using namespace std;

void print_array(const int s[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << s[i];
        if (i + 1 < n) cout << " ";
    }
    cout << "\n";
}

int main() {
    int a[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Массив: ";
    print_array(a,n);
    cout << "\n";

    int idx = bin_search(a, 1, n);
    if (idx == -1) cout << "не найден\n";
    else cout << "найден по индексу " << idx << "\n";

    idx = bin_search(a, 9, n);
    if (idx == -1) cout << "не найден\n";
    else cout << "найден по индексу " << idx << "\n";

    idx = bin_search(a, 19, n);
    if (idx == -1) cout << "не найден\n";
    else cout << "найден по индексу " << idx << "\n";

    idx = bin_search(a, 0, n);
    if (idx == -1) cout << "не найден\n";
    else cout << "найден по индексу " << idx << "\n";

    return 0;
}