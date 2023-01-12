/* Begin11. Даны два ненулевых числа. Найти сумму, разность, 
произведение и частное их модулей. */

#include <stdio.h>
#include <math.h>
int main() {
    double a, b;
    scanf("%lf%lf", &a, &b);
    double ma = fabs(a);
    double mb = fabs(b);
    printf("%.2f, %.2f, %.2f, %.2f\n", ma+mb, ma-mb, ma*mb, ma/mb);
    return 0;
}