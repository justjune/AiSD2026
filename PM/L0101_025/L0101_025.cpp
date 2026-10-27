//Толстобров Дмитрий ПМ-2
//сортировка вставками
#include "L0101_025.hpp"
#include <algorithm>
using namespace std;

void insertion_sort(int s[], int n){
    for (int i=1; i<n; i++){
        int j=i;
        while((j>0)&&(s[j]<s[j-1])){
            swap(s[j], s[j-1]);
            j--;
        }
    }
}