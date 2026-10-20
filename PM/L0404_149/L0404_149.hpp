//L0404_149 Создание пирамиды повторяющимися вставками
//Тюхтин Георгий, МЕН-253201

#ifndef HEADER_HPP
#define HEADER_HPP
class priority_queue {
public:
	int q[1024 + 1];
	size_t n;
	priority_queue() {
		n = 0;
	};
	~priority_queue() {};
};
int pq_parent(int n);
void pq_swap(priority_queue* queue, size_t p, size_t s);
void bubble_up(priority_queue* queue, size_t p);
void pq_insert(priority_queue* queue, int x);
void pq_init(priority_queue* queue);
void make_heap(priority_queue* queue, int s[], int n);
void pq_draw(priority_queue* queue);
#endif