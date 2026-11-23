// Виктория Гультяева МЕН-253201
#include <iostream>
#include "L0702_242.hpp"
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    graph g;

    cout << "Тест 1: неориентированный граф" << endl;
    initialize_graph(&g, false);
    cout << "nvertices = " << g.nvertices << " (ожидается 0)" << endl;
    cout << "nedges = " << g.nedges << " (ожидается 0)" << endl;
    cout << "directed = " << g.directed << " (ожидается 0)" << endl;

    cout << endl;

    cout << "Тест 2: ориентированный граф" << endl;
    initialize_graph(&g, true);
    cout << "directed = " << g.directed << " (ожидается 1)" << endl;

    return 0;
}