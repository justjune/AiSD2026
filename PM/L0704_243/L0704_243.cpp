// Виктория Гультяева МЕН-253201
#include <iostream>
#include "L0704_243.hpp"

void read_graph(graph* g, bool directed) {
    initialize_graph(g, directed);

    std::cin >> g->nvertices;
    
    int m;
    std::cin >> m;

    for (int i = 1; i <= m; ++i) {
        int x, y;
        std::cin >> x >> y;
        insert_edge(g, x, y, directed);
    }
}