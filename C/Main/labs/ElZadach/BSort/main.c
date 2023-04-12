#include <stdio.h>
#include <time.h>
#define SIZE 30

void main (){
    int i,j,tmp;

    int arr[SIZE];
    srand(time(NULL));
    for(i=0;i<SIZE;i++) arr[i]=rand()%100;

    for (i=0;i<SIZE;i++){
        for(j=0;j<SIZE-1;j++){
            if (arr[j]>arr[j+1]){
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    for(i=0;i<SIZE;i++) printf("%d ", arr[i]);
}