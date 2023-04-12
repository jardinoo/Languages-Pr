#include <stdio.h>

int main () {
    double a,b;
    scanf("%lf %lf", &a, &b);
    if (a==b) printf("a = b");
    else if (a>b) printf("%g > %g", a,b);
    else printf("%g < %g", a,b);
    
    
}