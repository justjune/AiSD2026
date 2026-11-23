// Виктория Гультяева МЕН-253201
#include <iostream>
#include "L0705_243.hpp"
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    graph g;

    cout << "Тест 1: неориентированный граф" << endl;
    initialize_graph(&g, false);
    g.nvertices = 5;

    insert_edge(&g, 1, 2, false);
    insert_edge(&g, 1, 3, false);
    insert_edge(&g, 2, 4, false);
    insert_edge(&g, 3, 5, false);
    insert_edge(&g, 4, 5, false);

    cout << "nvertices = " << g.nvertices << endl;
    cout << "nedges = " << g.nedges << endl << endl;

    print_graph(&g);

    cout << endl << "===================" << endl;

    cout << "Тест 2: ориентированный граф" << endl;
    initialize_graph(&g, true);
    g.nvertices = 4;

    insert_edge(&g, 1, 2, true);
    insert_edge(&g, 1, 3, true);
    insert_edge(&g, 2, 4, true);
    insert_edge(&g, 3, 4, true);

    cout << "nvertices = " << g.nvertices << endl;
    cout << "nedges = " << g.nedges << endl << endl;

    print_graph(&g);

    return 0;
}