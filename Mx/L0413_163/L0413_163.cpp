#include "L0413_163.h"
#include <utility> 

int partition(item_type s[], int l, int h) {
    int p = h;          
    int firsthigh = l;  

    for (int i = l; i < h; i++) {
        if (s[i] < s[p]) {
            std::swap(s[i], s[firsthigh]);
            firsthigh++;
        }
    }
    std::swap(s[p], s[firsthigh]);

    return firsthigh;
}