#include <stdio.h>

void main (void) {
    int months;
    printf ("Kakoi seichas mesiac po nomery?\n");
    scanf ("%d", &months);
    if ((months == 12) || (months < 3)) printf("Its Winter!");
    else if (months < 6) printf("Its Spring!");
    else if (months < 9) printf("Its Summer!");
    else if (months < 12) printf("Its Autumn!");
}