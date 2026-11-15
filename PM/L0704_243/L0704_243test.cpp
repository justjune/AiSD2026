// Виктория Гультяева МЕН-253201
#include <iostream>
#include "L0704_243.hpp"
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    graph g;

    // Тест 1: неориентированный граф
    cout << "Тест 1: неориентированный граф" << endl;
    initialize_graph(&g, false);
    g.nvertices = 4;

    insert_edge(&g, 1, 2, false);
    insert_edge(&g, 1, 3, false);
    insert_edge(&g, 2, 4, false);

    cout << "nvertices = " << g.nvertices << endl;
    cout << "nedges = " << g.nedges << " (ожидается 3)" << endl;
    cout << "directed = " << g.directed << " (ожидается 0)" << endl;

    cout << endl << "Степени вершин:" << endl;
    for (int i = 1; i <= g.nvertices; i++) {
        cout << "vertex " << i << ": degree = " << g.degree[i] << endl;
    }

    cout << endl << "Списки смежности:" << endl;
    for (int i = 1; i <= g.nvertices; i++) {
        cout << i << " -> ";
        edgenode *p = g.edges[i];
        while (p != NULL) {
            cout << p->y << " ";
            p = p->next;
        }
        cout << endl;
    }

    cout << endl << "===================" << endl;

    // Тест 2: ориентированный граф
    cout << "Тест 2: ориентированный граф" << endl;
    initialize_graph(&g, true);
    g.nvertices = 3;

    insert_edge(&g, 1, 2, true);
    insert_edge(&g, 2, 3, true);

    cout << "nvertices = " << g.nvertices << endl;
    cout << "nedges = " << g.nedges << " (ожидается 2)" << endl;
    cout << "directed = " << g.directed << " (ожидается 1)" << endl;

    cout << endl << "Списки смежности:" << endl;
    for (int i = 1; i <= g.nvertices; i++) {
        cout << i << " -> ";
        edgenode *p = g.edges[i];
        while (p != NULL) {
            cout << p->y << " ";
            p = p->next;
        }
        cout << endl;
    }

    return 0;
}