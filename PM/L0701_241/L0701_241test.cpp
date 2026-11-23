// Виктория Гультяева МЕН-253201
#include <iostream>
#include "L0701_241.hpp"
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    
    graph g;
    g.nvertices = 0;
    g.nedges = 0;
    
    cout << "Структуры graph и edgenode созданы" << endl;
    cout << "nvertices = " << g.nvertices << endl;
    cout << "nedges = " << g.nedges << endl;
    
    return 0;
}