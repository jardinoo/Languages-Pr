#include <stdio.h>

int main () {
    int a, b ,c, max;
    scanf ("%d %d %d", &a, &b, &c);
    if (a>b) max = a;
    else max= b;
    if (max>c) printf("max= %d", max);
    else printf ("max= %d", c);
}