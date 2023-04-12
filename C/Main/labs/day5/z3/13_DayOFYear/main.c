#include <stdio.h>

void main () {
    int day= 0,d,m,y, months[]={0,31,28,31,30,31,30,31,31,30,31,30};
    scanf ("%d:%d:%d", &d, &m, &y);
    for (int i=1; i<m; ++i)
        day+=months[i];
    printf("its %d day of year", day+d);
}