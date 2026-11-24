//Тюхтин Георгий, МЕН-253201
//Листинг 7.11 - вывод вершин и рёбер графа на экран

#include "L0711_254.hpp"

int main() {
	graph g{};
	read_graph(&g, "graph.txt",0); //граф в виде трех шестиугольных ячеек
	initialize_search(&g);
	bfs(&g, 1);
	std::cout << "Nothing wrong happened\n";
}