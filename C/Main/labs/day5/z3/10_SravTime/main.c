#include <stdio.h>

void main (void) {
    int h1, m1, s1, h2, m2, s2;
    printf ("put h1:m1:s1 h2:m2:s2\n");
    scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
    if ((h1*3600+m1*60+s1)>(h2*3600+m2*60+s2)) printf("t1 > t2");
    else if ((h1*3600+m1*60+s1)<(h2*3600+m2*60+s2)) printf ("t1 < t2");
    else printf ("t1 = t2");
}