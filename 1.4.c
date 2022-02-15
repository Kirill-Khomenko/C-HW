#include <stdio.h>
#include <math.h>

int main(){
//	float x,y;
	
//	scanf("%f", &x);
//	y = sqrt(x*x+1)-x/3;
//	printf("y=%f", y);
	
	float g = 6.67e-11;
	//printf("g=%.20f\n", g);
	float m1,m2,r,F;
	scanf("%f", &m1);
	scanf("%f", &m2);
	scanf("%f", &r);
	F = g*m1*m2/(r*r);
	printf("F=%.20f\n", F);
	

	
	
}
