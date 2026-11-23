// Виктория Гультяева МЕН-253201
#include <iostream>
#include "L0703_242.hpp"
using namespace std;

void insert_edge(graph *g, int x, int y, bool directed) {
    edgenode *p = new edgenode;

    p->weight = 0;
    p->y = y;
    p->next = g->edges[x];

    g->edges[x] = p;

    g->degree[x]++;

    if (!directed) {
        insert_edge(g, y, x, true);
    } else {
        g->nedges++;
    }
}