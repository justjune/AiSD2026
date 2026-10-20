//L0404_149 Создание пирамиды повторяющимися вставками
//Тюхтин Георгий, МЕН-253201

#include <iostream>
#include "L0404_149.hpp"
int main() {
	int s[]{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19 };
	priority_queue P;
	make_heap(&P, s, 16);
	std::cout << "\nI did try to draw pyramide like in Skiena's book (page 146):\n\n";
	pq_draw(&P);                    //плохое рисование пирамиды
	std::cout << "\n\n";
}