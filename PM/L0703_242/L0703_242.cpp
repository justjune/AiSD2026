// Виктория Гультяева МЕН-253201
#include <iostream>
#include <cstdio>
#include "L0703_242.hpp"
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
    edgenode *p = new edgenode;
    p->y = y;
    p->weight = 0;
    p->next = g->edges[x];
    g->edges[x] = p;
    g->degree[x]++;

    if (!directed) {
        edgenode *q = new edgenode;
        q->y = x;
        q->weight = 0;
        q->next = g->edges[y];
        g->edges[y] = q;
        g->degree[y]++;
    }
    g->nedges++;
}

void read_graph(graph *g, bool directed) {
    int i;                /* Счетчик */
    int m;                /* Количество ребер */
    int x, y;             /* Вершины в ребре (x,y) */

    initialize_graph(g, directed);

    scanf("%d %d", &(g->nvertices), &m);

    for (i = 1; i <= m; i++) {
        scanf("%d %d", &x, &y);
        insert_edge(g, x, y, directed);
    }
}