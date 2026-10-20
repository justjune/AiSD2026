#include "L0810_300.hpp"
#include <cassert>
#include <iostream>

void test_frst() {
    DijkstraGraph g(3);
    
    // Простой линейный граф: 1 -> 2 (вес 5), 2 -> 3 (вес 10)
    g.addEdge(1, 2, 5);
    g.addEdge(2, 3, 10);
    
    int tree_weight = g.dijkstra(1);
    
    assert(g.getDistance(1) == 0);
    assert(g.getDistance(2) == 5);
    assert(g.getDistance(3) == 15);
    
    assert(g.getParent(2) == 1);
    assert(g.getParent(3) == 2);
    
    assert(tree_weight == 15); // 5 + 10 = 15

    std::cout << "Первый тест пройден!\n";
}

void test_scnd() {
    DijkstraGraph g(4);
    
    // 1 -> 2 напрямую за 100
    // 1 -> 3 за 10, а потом 3 -> 2 за 5 (итого 15)
    g.addEdge(1, 2, 100);
    g.addEdge(1, 3, 10);
    g.addEdge(3, 2, 5);
    g.addEdge(2, 4, 20);

    int tree_weight = g.dijkstra(1);
    
    assert(g.getDistance(1) == 0);
    assert(g.getDistance(3) == 10);
    assert(g.getDistance(2) == 15); // Выбран более короткий путь через 3
    assert(g.getDistance(4) == 35); // 15 + 20
    
    assert(g.getParent(3) == 1);
    assert(g.getParent(2) == 3);
    assert(g.getParent(4) == 2);
    
    assert(tree_weight == 35); // 10 + 5 + 20 = 35

    std::cout << "Второй тест пройден!\n";
}

int main() {
    test_frst();
    test_scnd();

    return 0;
}
