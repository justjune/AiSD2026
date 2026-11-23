// Виктория Гультяева МЕН-253201
#include <iostream>
#include "L0705_243.hpp"
using namespace std;

void print_graph(graph *g) {
    int i;
    edgenode *p;

    for (i = 1; i <= g->nvertices; i++) {
        cout << i << ": ";
        p = g->edges[i];
        while (p != nullptr) {
            cout << " " << p->y;
            p = p->next;
        }
        cout << endl;
    }
}