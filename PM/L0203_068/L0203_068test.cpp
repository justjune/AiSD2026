#include <iostream>
#include "L0203_068.hpp"
using namespace std;

int main(){
    char text[]="Читаю книгу Скиена без смс и регистрации";
    char pattern[]="Скиена";
    int result=findmatch(pattern, text);
    cout<<"Текст: "<<text<<endl;
    cout<<"Ищем: "<<pattern<<endl<<" Результат : "<<result<<endl;
    return 0;
}