//Толстобров Дмитрий ПМ-2
//сортировка методом выбора
#include "L0201_065.hpp"
#include <algorithm>
using namespace std;

void selection_sort(int s[], int n){
	for(int i=0; i<n; i++){
		int min=i;
		for(int j=i+1; j<n; j++){if(s[j]<s[min]){min=j;}}
		swap(s[i], s[min]);
	}
}