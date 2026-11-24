//L0408_153 Сравнение k-го элемента с числом x
//Тюхтин Георгий, МЕН-253201

#include "L0408_153.hpp"
int main() {
	srand(time(0));
	priority_queue P;
	int N = 22;
	for (int i = 0; i < N+1; i++) {
		pq_insert(&P, 1 + rand() % 20); //заполнение пирамиды N случайными элементами
	}
	std::cout << "\nI did try to draw pyramide like in Skiena's book (page 146):\n\n";
	pq_draw(&P);                    //плохое рисование пирамиды
	int k = 8;
	std::cout << "\n\n[count] of "<<k<<" smallest elements from that pyramide that not less than [x]:\ncount\tx";
	for (int i = 1;i < 10;i++) {
		std::cout << '\n' << heap_compare_start(&P, k, i) << '\t' << i;
	}
	std::cout << "\n\n";
}