/*Последовательная реализация Распределения Шариков на доске Гальтона*/
#include "H.h"
void G(int h, int l, int n, int time0, double *g) {
	srand(time0);
	for (int i = 0; i < l; i++) { g[i] = 0; }
	int r = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			r += rand() % 2;
		}
		g[r]++;
		r = 0;
	}
}
