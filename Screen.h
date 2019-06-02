/*Вывод в консоль*/
#include "H.h"
void ScreenOut(int h, int l, int n,  double tG, double tP, double *g, double *p, double *b) {
	int k = 1; //так надо для симетрии
	printf("h=%d\nl=%d\nn=%d\n\n", h, l, n);
    printf("No\tGalton\t\tParalelGalton\tRaznost\t\tBinom\n");
    printf("*#\t%.2f s\t\t%.2f s\t\t##\t\t*#\n", tG, tP);
	for (int i = k; i < l; i++) {
        printf("%+d\t%.0f\t\t%.0f\t\t%+d\t\t%.0f\n", l/2-i, g[i], p[i], (int)(g[i] - p[i]), b[i]);
	}
}
