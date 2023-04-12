#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 100

void maxmin (int*x, int s, int *max, int *min);

void main(int argc, char *argv[]) {

    int i, x[size], n;
    srand(time(NULL)); // randomize seed
    for(i=0;i<size;i++){
        x[i] = rand();
    }
    int max, min;

    maxmin(x, size, &max, &min);
    printf("\n");
    //for (int i=0; i<size; printf("%d ", x[i]), i++);
    printf("\nmin= %d, max= %d", min, max);

}

void maxmin (int*x, int s, int *max, int *min) {
    int max1, min1;
    max1=min1=*x;
    for (int i=0; i<s; i++){
        
        if (max1<x[i])   max1=x[i];
        if (min1>x[i])   min1=x[i];
                
        
    }
    if (max!=0) *max=max1;
    if(min!=0) *min=min1;

    
}