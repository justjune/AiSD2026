//L0408_153 Сравнение k-го элемента с числом x
//Тюхтин Георгий, МЕН-253201

#include "L0408_153.hpp"

int pq_young_child(int n) {  //вспомогательная функция
	return 2 * n;
}

int heap_compare(priority_queue* queue, int i, int count, int x) { //основной метод листинга
	if ((count <= 0) || (i > queue->n)) { //если вышли из пирамиды или дальше идти не нужно
		return count;
	}
	if (queue->q[i] < x) { //если данный элемент таки меньше, чем х, то вызываем рекурсию
		count = heap_compare(queue, pq_young_child(i), count - 1, x); //к меньшему потомку идем, уменьшая счетчик
		count = heap_compare(queue, pq_young_child(i) + 1, count, x); //к большему потомку идем, не изменяя счетчик
	}                                                                 //(иначе функция ломается - такова рекурсия)
	return(count); //по итогу выведет количество наименьших [count] элементов, начиная с i-го, которые не меньше, чем х
}

int heap_compare_start(priority_queue* queue, int k, int x) { //стартовый вызов функции heap_compare 
	return heap_compare(queue, 1, k, x);                      //дабы не запоминать, какими должны быть i и count
}
