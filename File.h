/*Запись в файл*/
#include "H.h"
void FileOut(int h, int l, int n, double *b, double *Ng, double *Np) {
	ofstream text("doska result.txt");
	text << "h=" << h << endl;
	text << "l=" << l << endl;
	text << "n=" << n << endl;
	text << endl;
    text << "No\tBinom\tNormGalton\tNormParalelGalton" << endl;
	for (int i = 1; i < l; i++) {
		text << l/2-i << "\t" << b[i] << "\t" << Ng[i] << "\t" << Np[i] << "\t" << endl; }
	text.close();
}
