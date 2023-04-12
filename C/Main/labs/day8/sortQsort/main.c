#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <io.h> что это
#define SIZE 30

int sort (const void* p1, const void* p2) {
    int res=0;
    int a=*(int*)p1;
    int b=*(int*)p2;
    if ((a%2)==(b%2)){
        if (a%2==0) {
            if (a>b) res=1;
            else if (a<b) res=-1;
        }
        else {
            if (a<b) res=1;
            else if (a>b) res=-1;
        }
    }
    else if ((a%2!=0)&&(b%2==0)) res=1;
    else if ((a%2==0)&&(b%2!=0)) res=-1;
    return res;
}

// void swap (int* a, int* b) {
//     int tmp= *a;
//     *a=*b;
//     *b=tmp;
// }

// void sort (int *array, int size) {
//     int i=0, j=0,tmp;
//     for (;i<size;i++){
//         for (;j<size-1;j++){
//             //int a= array[j];
//             //int b= array[j+1];
//             if ((array[j]%2)==(array[j+1]%2)){
//                 if (array[j]%2==0) {
//                     if (array[j]>array[j+1]) {
//                         tmp=array[j];
//                         array[j]=array[j+1];
//                         array[j+1]=tmp;
//                         //swap(*(array+j))
//                     }
//                 }
//                 else {
//                     if (array[j]<array[j+1]) {
//                         tmp=array[j];
//                         array[j]=array[j+1];
//                         array[j+1]=tmp;
//                     }
//                 }
//             }
//             else if ((array[j]%2!=0)&&(array[j+1]%2==0)){
//                 tmp=array[j];
//                 array[j]=array[j+1];
//                 array[j+1]=tmp;
//             } 
//         }
//     }
// }

void main () {
    int i, x[SIZE], n;
    srand(time(NULL)); // randomize seed
    for(i=0;i<SIZE;i++){
        x[i] = rand()%100;
    }

    for(i=0;i<SIZE;i++) printf("%d ",x[i]);
    printf ("\n");
    printf ("\n");

    qsort(x,SIZE,sizeof(int),sort);
    //sort(&x,SIZE);


    for(i=0;i<SIZE;i++) printf("%d ",x[i]);
    
}