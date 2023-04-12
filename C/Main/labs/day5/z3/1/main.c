#include <stdio.h>

int main () {
    double a;
    char l;
    scanf("%lf%c", &a, &l);
    if (l=='i') printf ("%.0lf\"= %.2lf cm\n", a, a*2.54);
    if (l=='c') printf ("%.2lf cm= %.2lf\"\n", a, (a/2.54));

}