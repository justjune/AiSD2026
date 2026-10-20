//L0403_149 Вставка элемента в пирамиду
//Тюхтин Георгий, МЕН-253201

#include <iostream>
#include "L0403_149.hpp"
int main() {
	srand(time(0));
	priority_queue P;
	for (int i = 0; i < 18; i++) {
		pq_insert(&P, 1+rand()%20); //заполнение пирамиды 16 случайными элементами
	}
	std::cout << "\nI did try to draw pyramide like in Skiena's book (page 146):\n\n";
	pq_draw(&P);                    //плохое рисование пирамиды
	std::cout << "\n\n";
}