#pragma once
#include <vector>

vector<int> BFS(int** adj, int V, int s);//V-кол-во вершин s-начальная вершина(start) adj-матрица смежности
//создание матрицы
int** create_matrix(int V);
//чистка
void free_matrix(int** adj, int V);