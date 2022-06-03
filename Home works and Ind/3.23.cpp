#include <cstdio>
using namespace std;

double sReLu( double x, double tl,double tr, double al, double ar) {
    double res;
    if (x < tl) {
        res = tl + al * (x - tl);
    }
    if (x > tl && x < tr) {
        res = 0;
    }
    if (x >= tr ) {
        res = tr + ar * (x - tr);
    }
    return res;
}

double derivative_sReLu(double x, double tl, double tr, double al, double ar) {
    double res;
    if (x < tl) {
        res = al;
    }
    if (x > tl && x < tr) {
        res = 0;
    }
    if (x >= tr) {
        res = ar;
    }
    return res;
}

int main() {
    double x, tl, tr, al, ar, function, derivative;

    printf("x = ");
    scanf("%lf", &x);

    printf("tl = ");
    scanf("%lf", &tl);

    printf("tr = ");
    scanf("%lf", &tr);

    printf("al = ");
    scanf("%lf", &al);

    printf("ar = ");
    scanf("%lf", &ar);

    function = sReLu(x, tl,tr,al,ar);
    derivative = derivative_sReLu(x, tl, tr, al, ar);
    printf("Function value is %0.1lf\n", function);
    printf("Derivative value is %0.1lf", derivative);
}
