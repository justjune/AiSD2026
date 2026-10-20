#include "L0810_300.hpp"
#include <iostream>
#include <climits>

// Корнешов Дмитрий ПМ-201

const int MAXINT = INT_MAX;

DijkstraGraph::DijkstraGraph(int n) : nvertices(n) {
    edges.resize(nvertices + 1, nullptr);
    intree.resize(nvertices + 1, false);
    distance.resize(nvertices + 1, MAXINT);
    parent.resize(nvertices + 1, -1);
}

DijkstraGraph::~DijkstraGraph() {
    for (int i = 1; i <= nvertices; i++) {
        Edgenode* curr = edges[i];
        while (curr != nullptr) {
            	Edgenode* next = curr->next;
            	delete curr;
            	curr = next;
        }
        edges[i] = nullptr;
    }
}

// Добавление ребра в начало списка смежности вершины u
void DijkstraGraph::addEdge(int u, int v, int weight) {
    Edgenode* node = new Edgenode();
    node->y = v;
    node->weight = weight;
    node->next = edges[u];
    edges[u] = node;
}

int DijkstraGraph::dijkstra(int start) {
    int i;              // Счетчик 
    Edgenode *p;        // Временный указатель
    int v;              // Текущая вершина для обработки
    int w;              // Кандидат на следующую вершину
    int dist;           // Наименьшая стоимость расширения дерева
    int weight = 0;     // Вес дерева 

    for (i = 1; i <= nvertices; i++) {
        intree[i] = false;
        distance[i] = MAXINT;
        parent[i] = -1;
    }

    distance[start] = 0;
    v = start;

    while (!intree[v]) {
        intree[v] = true;
        if (v != start) {
		std::cout << "edge (" << parent[v] << "," << v << ") in tree \n";

  		Edgenode* edge_ptr = edges[parent[v]];
            	while (edge_ptr != nullptr) {
                	if (edge_ptr->y == v) {
                    		weight = weight + edge_ptr->weight; // Прибавляем только вес ребра!
                   		break;
			}
                edge_ptr = edge_ptr->next;
            	}
        }

        p = edges[v];
        while (p != nullptr) {
            w = p->y;
            if (distance[w] > (distance[v] + p->weight)) {
                distance[w] = distance[v] + p->weight;
                parent[w] = v;
            }
            p = p->next;
        }

        dist = MAXINT;
        for (i = 1; i <= nvertices; i++) {
            if ((!intree[i]) && (dist > distance[i])) {
                dist = distance[i];
                v = i;
            }
        }
    }

    return weight;
}

int DijkstraGraph::getDistance(int vertex) const {
    return distance[vertex];
}

int DijkstraGraph::getParent(int vertex) const {
    return parent[vertex];
}

int DijkstraGraph::getNVertices() const {
    return nvertices;
}