#include <stdio.h>

void main (void){
    int d,m,y;
    scanf ("%d:%d:%d", &d, &m, &y);
    d+=1;
    if ((m==2)&&(d>29)) {m+=1; d=1;};
    if (d>31) {m+=1; d=1;};
    if (m>12) {y+=1; m=1; d=1;};
    printf ("%d:%d:%d", d, m, y);

}