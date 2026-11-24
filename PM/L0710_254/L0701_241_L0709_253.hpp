//Тюхтин Георгий, МЕН-253201
//Вспомогательный код

#ifndef L0701_241_L0709_253_HPP
#define L0701_241_L0709_253_HPP
//Листинг 7.1
int const MAXV = 1024;
class edgenode {
public:
	int y;
	int weight;
	edgenode* next;
	edgenode(edgenode* next, int y, int weight=0) {
		this->weight = weight;
		this->y = y;
		this->next = next;
	}
	~edgenode() {
	}
};

class graph {
public:
	edgenode* edges[MAXV + 1]; //информация о смежности
	int degree[MAXV + 1];      //степень каждой вершины (количество соседних вершин)
	int nvertices;            //количество вершин в графе
	int nedges;               //количество ребер в графе
	bool directed;            //ориентирован ли граф
	//Листинг 7.2
	graph(bool directed=0) {
		this->nvertices = 0;
		this->nedges = 0;
		this->directed = directed;
		for (int i = 1;i <= MAXV;i++) {
			this->degree[i] = 0;
			this->edges[i] = nullptr;
		}
	}
	~graph() {
	}
};

//Листинг 7.4
void insert_edge(graph* g, int x, int y, bool directed=0, int weight=0);

//Листинг 7.3
#include <iostream>
#include <fstream>
#include <string>
void read_graph(graph* g, std::string filename, bool directed);

//Листинг 7.5
void print_graph(graph* g);

//Листнг 7.8
void initialize_search(graph* g);

//Листинг 7.9
class queue {
public:
	int q[MAXV + 1];
	int m;           //количество посещенных вершин (идут подряд с первой)
	int n;           //размер очереди
	queue() {
		this->n = 0;
		this->m = 0;
		for (int i = 0;i < MAXV;i++) {
			this->q[i] = -1;
		}
	}
	~queue() {
	}
};
void init_queue(queue* q);
void enqueue(queue* q, int newelement);
int dequeue(queue* q);
bool empty_queue(queue* q);

void process_vertex_early(int x);
void process_vertex_late(int x);
void process_edge(int x, int y);



void bfs(graph* g, int start);

#endif
