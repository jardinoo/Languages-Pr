#include <stdio.h>

int main() 
{
    double a1, a2;

    scanf("%lf", &a1);
    scanf("%lf", &a2);

    double c= a1 / a2;
    printf("%.3lf", c);


    return 0;
}