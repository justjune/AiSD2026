// Виктория Гультяева МЕН-253201
#include <iostream>
#include "L0703_242.hpp"
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    graph g;

    cout << "Введите количество вершин и ребер (например: 5 4):" << endl;
    cout << "Затем введите ребра по парам (x y):" << endl;

    read_graph(&g, false);  

    cout << endl << "Результат:" << endl;
    cout << "nvertices = " << g.nvertices << endl;
    cout << "nedges = " << g.nedges << endl;
    cout << "directed = " << g.directed << endl;

    cout << endl << "Степени вершин:" << endl;
    for (int i = 1; i <= g.nvertices; i++) {
        cout << "vertex " << i << ": degree = " << g.degree[i] << endl;
    }

    cout << endl << "Списки смежности:" << endl;
    for (int i = 1; i <= g.nvertices; i++) {
        cout << i << " -> ";
        edgenode *p = g.edges[i];
        while (p != NULL) {
            cout << p->y << " ";
            p = p->next;
        }
        cout << endl;
    }

    return 0;
}