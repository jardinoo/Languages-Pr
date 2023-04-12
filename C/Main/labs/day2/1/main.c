#include <stdio.h>

int main ()
{
    double x1, x2;
    scanf("%lf %lf", &x1, &x2);

    printf("sum= %.3lf,/n dif= %.3lf,/n mult= %.3lf,/n div= %.3lf", x1+x2, x1-x2, x1*x2, x1/x2);

    return 1;
}