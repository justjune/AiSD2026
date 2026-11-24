//Тюхтин Георгий, МЕН-253201
//Листинг 7.13 - поиск кратчайшего пути между двумя вершинами

#include "L0713_255.hpp"
void process_vertex_early(int x) {
	//still notning
}
void process_vertex_late(int x) {
	//still notning
}
void process_edge(int x, int y) {
	//notning
}
void find_path(int start, int end, int parents[]){
	if((start==end) || (end==-1)){
		std::cout<<'\n'<<start;
	}
	else{
		find_path(start, parents[end],parents);
		std::cout<<' '<<end;
	}
}