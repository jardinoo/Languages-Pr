#include <stdio.h>

void main (void) {
    int day;
    printf ("Pun number of day\n");
    scanf ("%d", &day);
    if (day<6) printf ("Work work work ...");
    if (day==6) printf ("Its Saturday, Have nice rest :)");
    if (day==7)printf ("Its Sunday, take time carefully");
}