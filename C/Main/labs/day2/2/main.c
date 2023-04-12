#include <stdio.h>

int main ()
{
    int a, a1, c, c1, cel;
    scanf("%d/%d %d/%d", &a, &a1, &c, &c1);



    printf("sum= %d %d/%d\n", ((a*c1 + c*a1) / (a1*c1)), 
    ((a*c1 + c*a1) % (a1*c1)), (a1*c1));

    printf("raz= %d %d/%d\n", ((a*c1 - c*a1) / (a1*c1)), 
    ((a*c1 - c*a1) % (a1*c1)), (a1*c1));

    printf("mul= %d %d/%d\n", ((a*c) / (a1*c1)), 
    ((a*c) % (a1*c1)), (a1*c1));

    printf("div= %d %d/%d\n", ((a*c1) / (a1*c)), 
    ((a*c1) % (a1*c)), (a1*c1));

    return 0;
}