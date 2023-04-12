#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 30

int main ()
{
    int i, dat[SIZE], n, j, key, tmp;
    srand(time(NULL)); // randomize seed
    for(i=0;i<SIZE;i++){
        dat[i] = rand()%1000;
    }	

    //sort
    for(i=0;i<SIZE-1;++i){
        j= i-1;
        key= dat[i];
        while ((dat[j] > key) && (j>=0)){
            tmp= dat[j+1];
            dat[j+1] = dat[j];
            dat[j]= tmp;
            --j;
        }
        dat[j+1] = key;
    }
    for(i=0;i<SIZE;++i) printf("%d ", dat[i]);
}