//L0408_153 Сравнение k-го элемента с числом x 
//Тюхтин Георгий, МЕН-253201

#ifndef L0408_153_HPP
#define L0408_153_HPP
#include "../L0403_149/L0403_149.hpp"
int pq_young_child(int n); //вспомогательная функция
int heap_compare(priority_queue* queue, int i, int count, int x); //основная функция листинга
int heap_compare_start(priority_queue* queue, int k, int x); //выдает, сколько из k наименьших элементов пирамиды не меньше, чем х
#endif