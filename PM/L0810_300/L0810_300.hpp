#ifndef L0810_300_HPP
#define L0810_300_HPP

#include <vector>

// Структура для представления ребра графа
struct Edgenode {
    int y;          // Конечная вершина ребра
    int weight;     // Вес ребра
    Edgenode* next; // Указатель на следующее ребро в списке смежности
};

class DijkstraGraph {
private:
    std::vector<Edgenode*> edges; // Список смежности (массив указателей на ребра)
    int nvertices;                // Количество вершин в графе
    
    std::vector<bool> intree; // массив вершин, входящих в дерево кротчайших вершин
    std::vector<int> distance; // массив, который хранит текущую минимальную длину пути от стартовой вершины до других вершин
    std::vector<int> parent; // массив родительских вершин
public:

    DijkstraGraph(int n);
    
    ~DijkstraGraph();

    // Метод добавления ориентированного ребра от u к v с весом weight
    void addEdge(int u, int v, int weight);

    int dijkstra(int start);

    // Методы доступа к результатам для написания assert-тестов
    int getDistance(int vertex) const;
    int getParent(int vertex) const;
    int getNVertices() const;
};

#endif //L0810_300_HPP
