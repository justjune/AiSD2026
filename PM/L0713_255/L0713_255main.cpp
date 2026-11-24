//Тюхтин Георгий, МЕН-253201
//Листинг 7.13 - поиск кратчайшего пути между двумя вершинами

#include "L0713_255.hpp"
extern int parent[];
int main() {
	graph g{};
	read_graph(&g, "graph.txt",0); //граф предыдущего листинга - было лень выдумывать что-то новое
	initialize_search(&g);
	bfs(&g, 1);
	find_path(1,13,parent);
	find_path(3,12,parent);
	find_path(1,12,parent);
	std::cout << "\nNothing wrong happened\n";
}