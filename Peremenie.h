/*Константы*/
#include "H.h"
int time0 = (int)time(0);					//задание общего времени для всех функций				
const int iter = 3;

const int h = 11;							//высота пирамиды (max=19 т.к выше факториал ломается), желательно брать нечетное
const int l = h + 1;						//длина пирамиды
const int n = 100000;					//количество итераций
