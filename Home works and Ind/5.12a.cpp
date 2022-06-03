#include <iostream>
#include <math.h>
int main() {
	double a0 = 1, a1 = 1, a2 = 3, ak;
	int k = 3, n;
	double p = 0.111111;
	printf("n = ");
	scanf_s("%d", &n);
	if (n < 3) {
		printf("ERROR\n");
	}
	while (k - 1 < n) {
		ak = a0 + a1 / pow(2, (k - 1));
		a0 = a1;
		a1 = a2;
		p *= ak / pow(3, k);
		a2 = ak;
		k++;
		n--;
		printf("%lf\n", p);
		printf("Pn = %lf\n", p);
	}
	//printf("Pn = %lf\n",p);
}