#define MAXV 100              /* Максимальное количество вершин */

typedef struct edgenode {
    int y;                    /* Номер соседней вершины */
    int weight;               /* Вес ребра, если есть */
    struct edgenode *next;    /* Следующее ребро в списке */
} edgenode;

typedef struct {
    edgenode *edges[MAXV+1];  /* Массив указателей(для каждой вершины свой список рёбер) */
    int degree[MAXV+1];       /* Количество соседей каждой вершины */
    int nvertices;            /* Количество вершин в графе */
    int nedges;               /* Количество ребер в графе */
    int directed;             /* Граф ориентированный? */
} graph;