#include <stdio.h>
#define SIZE 20


int main ()
{
    double d[SIZE]= {1,7,8,7,5,0,6,41,8,5,1,7,8,-7};
    double min=d[0], max=d[0], sum=0;

    for (int i=0; i<SIZE; ++i) {
        if (d[i]<min) min= d[i];
        if (d[i]>max) max= d[i];
        sum+= d[i];
    }
    
    printf("%g %g %g", min, max, sum);
    return 0;
}