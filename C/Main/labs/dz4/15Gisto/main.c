#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//gistogramma with * and random generate for different lenght

#define LENGHT 30

void main () {
    int i, j, num;
    srand(time(NULL));
    printf("Gisto witn %d lenght\n", LENGHT);
    for(i=1;i<=LENGHT;i++){
        num=rand()%64;
        printf("n%d- %d",i,num);
        for (j=0;j<num;j++){
            printf("*");
        }
        printf("\n");
    }
}