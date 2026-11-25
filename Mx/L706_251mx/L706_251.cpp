#include "L706_251.hpp"
#include <queue>
using namespace std;

vector<int> BFS(int** adj, int V, int s) {
    //0 Ч не открыта, 1 Ч открыта, 2 Ч обработана.
    vector<int> state(V + 1, 0);

    //родитель вершины в дереве BFS; 0 означает Ђнет родител€ї.
    vector<int> parent(V + 1, 0);

    vector<int> order;

    state[s] = 1; //начинаем отсюда и у нее нет родител€
    parent[s] = 0;

    queue<int> Q;
    Q.push(s);

    while (!Q.empty()) {
        int u = Q.front();
        Q.pop();
        order.push_back(u);

        for (int v = 1; v <= V; ++v) {
            if (adj[u][v] == 1) { //v смежна с u
                if (state[v] == 0) { //не открыта
                    state[v] = 1; //открыта
                    p[v] = u;
                    Q.push(v);
                }
            }
        }
        state[u] = 2; //обработана
    }
    return order;
}

int** create_matrix(int V) {
    int** adj = new int* [V + 1];
    for (int i = 0; i <= V; ++i) {
        adj[i] = new int[V + 1];
        for (int j = 0; j <= V; ++j) {
            adj[i][j] = 0;
        }
    }
    return adj;
}

void free_matrix(int** adj, int V) {
    for (int i = 0; i <= V; ++i) {
        delete[] adj[i];
    }
    delete[] adj;
}