/*Вычисление биноминальных коэффициентов аналитической функцией*/
#include "H.h"
void B(int h, int l, int n, double *b) {
	for (int i = 0; i < l; i++) { 
		b[i] = (((fact(l)/(fact(l-i)*fact(i)))*pow(0.5, i)*pow(0.5, l-i)));
		b[i] *= n;
	}
}
