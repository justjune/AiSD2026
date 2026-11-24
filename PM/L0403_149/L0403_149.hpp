//L0403_149 Вставка элемента в пирамиду
//Тюхтин Георгий, МЕН-253201

#ifndef L0403_149_HPP
#define L0403_149_HPP
#include <iostream>
class priority_queue {
public:
	int q[1024 + 1];
	size_t n;
	priority_queue() {
		n = 0;
	};
	~priority_queue() {};
};
int pq_parent(int n);                                     //вспомогательная функция - возвращает номер родителя n-го элемента пирамиды
void pq_swap(priority_queue* queue, size_t p, size_t s);  //вспомогательный метод - меняет два элемента местами

void bubble_up(priority_queue* queue, size_t p);          //вспомогательный метод листинга - перемещение элемента в нужное место в пирамиде
void pq_insert(priority_queue* queue, int x);             //основной метод листинга - вставка элемента в приамиду

void pq_draw(priority_queue* queue);                      //вспомогательный метод - рисует пирамиду наподобие того, как это представлено в книжке
#endif