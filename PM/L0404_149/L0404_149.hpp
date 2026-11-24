//L0404_149 Создание пирамиды повторяющимися вставками
//Тюхтин Георгий, МЕН-253201

#ifndef L0404_149_HPP
#define L0404_149_HPP
#include "../L0403_149/L0403_149.hpp"
void pq_init(priority_queue* queue);                    //вспомогательный метод листинга - задание пустой пирамиды
void make_heap(priority_queue* queue, int s[], int n);  //основной метод листинга - создание пирамиды
#endif