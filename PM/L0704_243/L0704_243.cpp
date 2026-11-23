// Виктория Гультяева МЕН-253201
#include <iostream>
#include <cstdio>
#include "L0704_243.hpp"
using namespace std;

void read_graph(graph *g, bool directed) {
    int i;
    int m;
    int x, y;

    initialize_graph(g, directed);

    scanf("%d %d", &(g->nvertices), &m);

    for (i = 1; i <= m; i++) {
        scanf("%d %d", &x, &y);
        insert_edge(g, x, y, directed);
    }
}