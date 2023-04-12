#include <stdio.h>

int main () {
    double t;
    char ei;
    scanf ("%lf%c", &t, &ei);

    if ((ei=='F') || (ei=='f')) printf ("%.0lfF= %.2lfC", t, (t-32)/(5/9.));
    if ((ei=='C') || (ei=='c')) printf ("%.0lfC= %.2lfF", t, (t*5/9.)+32);
}