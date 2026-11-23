// Виктория Гультяева МЕН-253201
#include <iostream>
#include "L0703_242.hpp"
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    graph g;
    g.nvertices = 4;
    for (int i = 0; i <= MAXV; i++) {
        g.edges[i] = nullptr;
        g.degree[i] = 0;
    }
    g.nedges = 0;
    g.directed = false;

    cout << "Тест: неориентированный граф" << endl;
    insert_edge(&g, 1, 2, false);
    insert_edge(&g, 1, 3, false);
    insert_edge(&g, 2, 4, false);

    cout << "nvertices = " << g.nvertices << endl;
    cout << "nedges = " << g.nedges << " (ожидается 3)" << endl;

    cout << endl << "Списки смежности:" << endl;
    for (int i = 1; i <= g.nvertices; i++) {
        cout << i << " -> ";
        edgenode *p = g.edges[i];
        while (p != nullptr) {
            cout << p->y << " ";
            p = p->next;
        }
        cout << endl;
    }

    return 0;
}