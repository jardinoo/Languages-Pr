#include <stdio.h>
#include <math.h>

void main (void) {
    int r= 2, h= 2;
    if ((h/2) >= r) printf ("circ inside square");
    else if ((sqrt((h/2)*(h/2)*2))<=r) printf ("square inside circ");
}