#pragma once


constexpr int MAXV = 100;

struct EdgeNode {
    int y;              // Информация о смежности (номер соседней вершины)
    int weight;         // Вес ребра, если есть
    EdgeNode* next;     // Следующее ребро в списке

    EdgeNode(int dest, int w = 0, EdgeNode* nextNode = nullptr);
};

struct Graph {
    EdgeNode* edges[MAXV + 1];  // Списки смежности для каждой вершины
    int degree[MAXV + 1];       // Степень каждой вершины
    int nvertices;              // Количество вершин в графе
    int nedges;                 // Количество ребер в графе
    bool directed;              // Граф ориентированный?

    // Конструктор для безопасной инициализации пустого графа
    Graph(bool isDirected = false);
};