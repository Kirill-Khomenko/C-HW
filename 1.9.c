#include <stdio.h>
int main()
{
    float a,b,ar,g;
    scanf_s("%f", & a);
    scanf_s("%f", & b);
    ar = (a + b)/2;
    g = 2/(1/a+1/b);
    printf("ar=%.3f\n", ar);
    printf("g=%.3f", g);
}
