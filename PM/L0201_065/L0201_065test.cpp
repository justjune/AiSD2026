#include "L0201_065.hpp"
#include <iostream>

using namespace std;
int main(){
  int s[]={1, 11, 20, 2, 12, 10, 23};
  int n=sizeof(s)/sizeof(s[0]);
  
  cout<<"до сортировки: ";
  for(int i=0; i<n; i++){cout<<s[i]<<" ";}
  cout<<endl;
  selection_sort(s, n);
  cout<<"после сортировки: ";
  for(int i=0; i<n; i++){cout<<s[i]<<" ";}
  cout<<endl;
  return 0;
}