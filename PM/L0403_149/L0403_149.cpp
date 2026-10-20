//L0403_149 Вставка элемента в пирамиду
//Тюхтин Георгий, МЕН-253201

#include <iostream>

class priority_queue {     //класс, с которым работает алгоритм
public:                    
	int q[1024 + 1];       //собственно, пирамида
	size_t n;              //размер пирамиды
	priority_queue() {
		n = 0;
	};
	~priority_queue() {};
};

int pq_parent(int n) { //вспомогательная функция
	if (n == 1) {
		return -1;
	}
	return int(n / 2);
}

void pq_swap(priority_queue* queue, size_t p, size_t s) { //вспомогательный метод
	int r = queue->q[p];
	queue->q[p] = queue->q[s];
	queue->q[s] = r;
}

void bubble_up(priority_queue* queue, size_t p) { //вспомогательный метод из листинга
	if (pq_parent(p) == -1) {                     //конец рекурсии
		return;
	}
	if (queue->q[pq_parent(p)] > queue->q[p]) {   //если нарушен принцип частичной отсортированности
		pq_swap(queue, p, pq_parent(p));          //поменять местами родителя и потомка
		bubble_up(queue, pq_parent(p));           //повторить сей метод для родителя
	}
}

void pq_insert(priority_queue* queue, int x) {                //основной метод листинга
	if (queue->n >= 1024) {                                   //переполнение массива q
		std::cout << "Warning: priority queue overflow!\n";
	}
	else {
		queue->n = (queue->n) + 1;                            //заполненный размер массива увеличили на 1
		queue->q[queue->n] = x;                               //добавили элемент в конец массива
		bubble_up(queue, queue->n);                           //перемещаем новый элемент туда, где он должен быть
	}
}

void pq_draw(priority_queue* queue) { //метод для плохого рисования пирамиды
	size_t m = 2;
	for (size_t i = 1; i < queue->n; i++) {
		std::cout << queue->q[i];
		if (i < m - 1) std::cout << '\t';
		else {
			std::cout << '\n';
			m = m * 2;
		}
	}
};