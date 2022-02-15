#include <stdio.h>
#include <math.h>
int main()
{
    double num;
    double num_integer, num_decimal;

    printf("Enter a number: ");
    scanf_s("%lf", &num);
    num_decimal = modf(num, &num_integer);

    printf("Integer part: %lf, Decimal part: %lf\n", num_integer, num_decimal);
}
