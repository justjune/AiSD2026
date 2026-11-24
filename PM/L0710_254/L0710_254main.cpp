//Тюхтин Георгий, МЕН-253201
//Листинг 7.10 - листинг, в котором ничего не происходит

#include "L0710_254.hpp"

int main() {
	graph g{};
	read_graph(&g, "graph.txt",0); //граф в виде шестиугольника
	initialize_search(&g);
	bfs(&g, 1);
	std::cout << "Nothing happened\n";
}