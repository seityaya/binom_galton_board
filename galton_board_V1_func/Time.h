/*Подсчет времени выполнения программы*/
#include "H.h"
double T(int iter, void(*f)(int h, int l, int n, int time0, double *g), int h, int l, int n, int time0, double *g){
	int t = 0;
	for (int i = 0; i < iter; i++) {
		time_t seconds0 = time(NULL);
		f(h, l, n,time0, g);
		time_t seconds1 = time(NULL) - seconds0;
		t += (int)seconds1;
	}
	return (double)t / (double)iter;
}
