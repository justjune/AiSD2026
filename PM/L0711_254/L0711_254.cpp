//Тюхтин Георгий, МЕН-253201
//Листинг 7.11 - вывод вершин и рёбер графа на экран

#include "L0711_254.hpp"
void process_vertex_early(int x) {
	std::cout<<"processed vertex:"<<x<<'\n';
}
void process_vertex_late(int x) {
	//still notning
}
void process_edge(int x, int y) {
	std::cout<<"processed edge:"<<x<<", "<<y<<'\n';
}