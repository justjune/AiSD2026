//Тюхтин Георгий, МЕН-253201
//Листинг 7.14 - поиск компонентов связности

#include "L0714_257.hpp"
extern int parent[];
int main() {
	graph g{};
	read_graph(&g, "graph.txt",0); //5 компонентов связности: 3 связных подграфа и 2 отдельные точки
	initialize_search(&g);
	connected_components(&g);
	std::cout << "\nNothing wrong happened\n";
}