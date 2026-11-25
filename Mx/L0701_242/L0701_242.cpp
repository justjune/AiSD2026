#include "L0701_242.h"

EdgeNode::EdgeNode(int dest, int w, EdgeNode* nextNode)
    : y(dest), weight(w), next(nextNode) {}

Graph::Graph(bool isDirected)
    : nvertices(0), nedges(0), directed(isDirected) {
    for (int i = 1; i <= MAXV; ++i) {
        edges[i] = nullptr;
        degree[i] = 0;
    }
}