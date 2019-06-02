/*Параллельная реализация Распределения Шариков на доске Гальтона*/
#include "H.h"
void P(int h, int l, int n, int time0, double *p) {
	srand(time0);
	for (int i = 0; i < l; i++) {
		p[i] = 0;
	}
	int i = 0;
	int j = 0;
	int r = 0;
#pragma omp parallel for private (j) reduction (+: r)
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < l; j++)
		{
			r += rand() % 2;
		}
		p[r]++;
		r = 0;
	}
}