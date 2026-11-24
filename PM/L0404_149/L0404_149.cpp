//L0404_149 Создание пирамиды повторяющимися вставками
//Тюхтин Георгий, МЕН-253201

#include "L0404_149.hpp"

void pq_init(priority_queue* queue) { //вспомогательный метод листинга
	queue->n = 0;
}

void make_heap(priority_queue* queue, int s[], int n) {  //основной метод листинга
	pq_init(queue);                                  //задание начального размера пирамиды
	for (int i = 0;i < n;i++) {
		pq_insert(queue, s[i]);                  //заполнение пирамиды
	}
}
