#include <stdio.h>

void main (void) {
    int year;
    scanf ("%d", &year);
    if ((year%4 == 0))
        if ((year%100 == 0) && (year%400 == 0)) printf("lap year!");
    else printf ("year is not loop");
}