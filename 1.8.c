#include <stdio.h>
int main()
{
    float a,b,p,d;
    scanf_s("%f", & a);
    scanf_s("%f", & b);
    p = a + b;
    d = a * b;
    printf("p=%.3f\n", p);
    printf("d=%.3f", d);
}
