/*Вычисление факториала*/
long long int fact(int n) {
	long long int r = 1;
	for (int i = 2; i <= n; ++i) {
		r *= i;
	}
	return r;
}