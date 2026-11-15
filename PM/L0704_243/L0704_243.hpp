// Виктория Гультяева МЕН-253201
#ifndef L0704_243_HPP
#define L0704_243_HPP

#define MAXV 100              /* Максимальное количество вершин */

struct edgenode {
    int y;                    /* Номер соседней вершины */
    int weight;               /* Вес ребра, если есть */
    struct edgenode *next;    /* Следующее ребро в списке */
};

struct graph{
    edgenode *edges[MAXV+1];  /* Массив указателей (для каждой вершины свой список рёбер) */
    int degree[MAXV+1];       /* Количество соседей каждой вершины */
    int nvertices;            /* Количество вершин в графе */
    int nedges;               /* Количество ребер в графе */
    bool directed;            /* Граф ориентированный? */
};

void initialize_graph(graph *g, bool directed);
void insert_edge(graph *g, int x, int y, bool directed);

#endif