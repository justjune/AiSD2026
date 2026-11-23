// Виктория Гультяева МЕН-253201
#ifndef L0701_241_HPP
#define L0701_241_HPP

#define MAXV 100

struct edgenode {
    int y;
    int weight;
    edgenode *next;
};

struct graph {
    edgenode *edges[MAXV+1];
    int degree[MAXV+1];
    int nvertices;
    int nedges;
    bool directed;
};

#endif