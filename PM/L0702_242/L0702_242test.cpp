// Виктория Гультяева МЕН-253201
#include <iostream>
#include "L0702_242.hpp"
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    graph g;

    // Тест 1: неориентированный граф
    initialize_graph(&g, false);
    cout << "Тест 1: неориентированный граф" << endl;
    cout << "nvertices = " << g.nvertices << " (ожидается 0)" << endl;
    cout << "nedges = " << g.nedges << " (ожидается 0)" << endl;
    cout << "directed = " << g.directed << " (ожидается 0)" << endl;

    bool edges_ok = true;
    for (int i = 1; i <= MAXV; i++) {
        if (g.edges[i] != NULL) {
            edges_ok = false;
            break;
        }
    }
    cout << "edges обнулены: " << (edges_ok ? "да" : "нет") << endl;

    bool degree_ok = true;
    for (int i = 1; i <= MAXV; i++) {
        if (g.degree[i] != 0) {
            degree_ok = false;
            break;
        }
    }
    cout << "degree обнулены: " << (degree_ok ? "да" : "нет") << endl;

    cout << endl;

    // Тест 2: ориентированный граф
    initialize_graph(&g, true);
    cout << "Тест 2: ориентированный граф" << endl;
    cout << "directed = " << g.directed << " (ожидается 1)" << endl;

    return 0;
}