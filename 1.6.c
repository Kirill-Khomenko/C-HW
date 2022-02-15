#include <stdio.h>

int main() {
	double C, F; 
	printf("C=");
	scanf_s("%lf",&C); 

	F = 9 * C / 5 + 32;
	printf("F=%g", F); 
}
