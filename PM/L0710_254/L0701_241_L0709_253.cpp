//Тюхтин Георгий, МЕН-253201
//Вспомогательный код


#include "L0701_241_L0709_253.hpp"

//Листинг 7.4
void insert_edge(graph* g, int x, int y, bool directed, int weight) {
	edgenode* p=new edgenode{ g->edges[x], y, weight };
	g->edges[x] = p;
	g->degree[x]++;
	if (!directed) {
		insert_edge(g, y, x, true, weight);
	}
	else {
		g->nedges++;
	}
}

//Листинг 7.3
void read_graph(graph* g, std::string filename, bool directed) {
	int x, y, m= 0;
	std::ifstream fin(filename);
	std::string a{}, b{};
	//*
	for (int i = 0;(!fin.eof() && (i <= (m * 2)+1)) || (m == 0 && i < 2);i++) {
		fin >> a;
		if (i > 1) {
			if(i%2==0) x = stoi(a);
			else {
				y = stoi(a);
				insert_edge(g, x, y, directed);
			}
		}
		else if(i==1) m = stoi(a);
		else if(i==0) g->nvertices = stoi(a);
	}
	fin.close();
}

//Листинг 7.5
void print_graph(graph* g) {
	edgenode* p;
	for (int i = 1;i < g->nvertices;i++) {
		std::cout << i<<": ";
		p = g->edges[i];
		while (p != nullptr) {
			std::cout << ' ' << p->y;
			p = p->next;
		}
		std::cout << '\n';
	}
}

//Листинг 7.8
bool processed[MAXV + 1]{};
bool discovered[MAXV + 1]{};
int parent[MAXV + 1]{};
void initialize_search(graph* g) {
	for (int i = 0;i <= g->nvertices;i++) {
		processed[i] = false;
		discovered[i] = false;
		parent[i] = -1;
	}
}

//Листинг 7.9
void enqueue(queue* q, int newelement) {
	q->q[q->n] = newelement;
	q->n++;
}
int dequeue(queue* q) {
	int res = q->q[q->m];
	q->m++;
	return res;
}
bool empty_queue(queue* q) {
	return q->m == q->n;
}

void process_vertex_early(int x);
void process_vertex_late(int x);
void process_edge(int x, int y);


void bfs(graph* g, int start) {
	queue q{};
	edgenode* p{};

	enqueue(&q, start);
	discovered[start] = true;

	while (!empty_queue(&q)) { //собственно, обход
		int v = dequeue(&q);
		process_vertex_early(v);
		processed[v] = true;
		p = g->edges[v];

		while (p != nullptr) {
			int y = p->y;
			if (!processed[y] || g->directed) {
				process_edge(v, y);
			}
			if (!discovered[y]) {
				enqueue(&q, y);
				discovered[y] = true;
				parent[y] = v;
			}
			p = p ->next;
		}
		process_vertex_late(v);
	}
}
