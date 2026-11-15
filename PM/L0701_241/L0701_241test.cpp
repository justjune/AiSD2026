// Виктория Гультяева МЕН-253201
#include <iostream>
#include "L0701_241.hpp"
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    graph g;
    g.nvertices = 5;
    g.nedges = 0;
    g.directed = 0;

    for (int i = 0; i <= MAXV; i++) {
        g.edges[i] = NULL;
        g.degree[i] = 0;
    }

    cout << "Структура graph создана." << endl;
    cout << "nvertices = " << g.nvertices << endl;
    cout << "nedges = " << g.nedges << endl;
    cout << "directed = " << g.directed << endl;

    return 0;
}