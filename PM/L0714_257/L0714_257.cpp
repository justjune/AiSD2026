//Тюхтин Георгий, МЕН-253201
//Листинг 7.14 - поиск компонентов связности

#include "L0714_257.hpp"
void process_vertex_early(int x) {
	std::cout<<' '<<x;
}
void process_vertex_late(int x) {
	//still notning
}
void process_edge(int x, int y) {
	//still notning
}
extern bool discovered[];
void connected_components(graph* g){
	int c=0; //номер компонента
	initialize_search(g);
	for(int i = 1; i <= g->nvertices; i++){
		if(!discovered[i]){
			c++;
			std::cout<<"Component "<<c<<':';
			bfs(g, i);
			std::cout<<'\n';
		}
	}
}