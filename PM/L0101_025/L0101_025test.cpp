#include <iostream>
#include "L0101_025.hpp"

using namespace std;
int main(){
  int s[]={1, 11, 20, 2, 12, 10, 23};
  int n=sizeof(s)/sizeof(s[0]);
  
  cout<<"до сортировки: ";
  for(int i=0; i<n; i++){cout<<s[i]<<" ";}
  cout<<endl;
  insertion_sort(s, n);
  cout<<"после сортировки: ";
  for(int i=0; i<n; i++){cout<<s[i]<<" ";}
  cout<<endl;
  return 0;
}