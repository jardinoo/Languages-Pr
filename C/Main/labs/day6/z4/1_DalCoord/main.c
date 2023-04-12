#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 100

void main () {

    int i, x[size], y[size], max, n;
    srand(time(NULL)); // randomize seed
    for(i=0;i<size;i++){
        x[i] = rand();
        y[i] = rand();
    }
    n=0;
    max= x[0]+y[0];
    for(i=0;i<size;i++){
        if ((x[i]+y[i])>max){
            max=x[i]+y[i];
            n=i;
        }
    }
    printf("Max point is %d and = %d, %d", n, x[n], y[n]);
}