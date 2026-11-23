// Виктория Гультяева МЕН-253201
#include <iostream>
#include "L0702_242.hpp"
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
        g->edges[i] = nullptr;
    }
}