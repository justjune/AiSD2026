// Виктория Гультяева МЕН-253201
#include <iostream>
#include <cstdlib>
#include "L0704_243.hpp"
using namespace std;

void initialize_graph(graph *g, bool directed) {
    int i;

    g->nvertices = 0;
    g->nedges = 0;
    g->directed = directed;

    for (i = 1; i <= MAXV; i++) {
        g->degree[i] = 0;
    }

    for (i = 1; i <= MAXV; i++) {
        g->edges[i] = NULL;
    }
}

void insert_edge(graph *g, int x, int y, bool directed) {
    edgenode *p;              /* Временный указатель */

    p = (edgenode*)malloc(sizeof(edgenode)); /* Выделяем память для edgenode */

    p->weight = 0;
    p->y = y;
    p->next = g->edges[x];

    g->edges[x] = p;          /* Вставка в начало списка */

    g->degree[x]++;

    if (!directed) {
        insert_edge(g, y, x, true);
    } else {
        g->nedges++;
    }
}