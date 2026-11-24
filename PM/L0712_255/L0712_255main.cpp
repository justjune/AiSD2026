//Тюхтин Георгий, МЕН-253201
//Листинг 7.12 - подсчет количества вершин и рёбер графа

#include "L0712_255.hpp"
extern int nedges;
int main() {
	graph g{};
	read_graph(&g, "graph.txt",0); //граф в виде трех шестиугольных ячеек с шестью дополнительными ребрами внути ячеек
	initialize_search(&g);
	bfs(&g, 1);
	std::cout << "Nedges count: "<<nedges<<"\n";
	std::cout << "Nothing wrong happened\n";
}