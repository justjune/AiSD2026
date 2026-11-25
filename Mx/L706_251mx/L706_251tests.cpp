#include <iostream>
#include <vector>
#include "L706_251.hpp"
using namespace std;

//печать графа
void print_graph(int** adj, int V) {
    cout << "ребра: ";
    for (int u = 1; u <= V; ++u) {
        for (int v = 1; v <= V; ++v) {
            if (adj[u][v] == 1) {
                cout << "  " << u << " -- " << v << "\n";
            }
        }
    }
    cout << "\n";
}

//вывод обхода
void print_order(const vector<int>& order) {
    cout << "ѕор€док обхода: ";
    for (size_t i = 0; i < order.size(); ++i) {
        cout << order[i];
        if (i + 1 < order.size()) cout << " -> ";
    }
    cout << "\n";
}

int main() {
    //   1 Ч 2 Ч 4
    //   |   |   |
    //   3 Ч 5 Ч 6
    int V1 = 6;
    int** g1 = create_matrix(V1);
    g1[1][2] = 1; g1[2][1] = 1;
    g1[1][3] = 1; g1[3][1] = 1;
    g1[2][4] = 1; g1[4][2] = 1;
    g1[2][5] = 1; g1[5][2] = 1;
    g1[3][5] = 1; g1[5][3] = 1;
    g1[4][6] = 1; g1[6][4] = 1;
    g1[5][6] = 1; g1[6][5] = 1;
    print_graph(g1, V1);
    vector<int> order1 = BFS(g1, V1, 1);
    print_order(order1);
    free_matrix(g1, V1);

    cout << "\n";

    //1Ч2Ч3Ч4Ч5
    int V2 = 5;
    int** g2 = create_matrix(V2);
    g2[1][2] = 1; g2[2][1] = 1;
    g2[2][3] = 1; g2[3][2] = 1;
    g2[3][4] = 1; g2[4][3] = 1;
    g2[4][5] = 1; g2[5][4] = 1;
    print_graph(g2, V2);
    vector<int> order2 = BFS(g2, V2, 1);
    print_order(order2);
    free_matrix(g2, V2);

    return 0;
}