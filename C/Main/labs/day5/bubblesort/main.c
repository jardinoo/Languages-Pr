#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 30

int main (){

    int i,n,j, temp, k= SIZE, a[SIZE]= {4,56,7,4,3,5,6,7,5,45,6,3456,7,654,56,54,5,4,5,4,5,5};

    for (int i=0; i<k; i++){
        //printf ("\n%d: ", i);
        for (int j=0; j<k; j++){
            if(a[j]>a[j+1]){
                a[j+1]= temp;
                a[j]= a[j+1];
                a[j]= temp;
            }
            //printf("%d ", a[i]);
        }
    }

    // data rand numb
    int dat[SIZE];
	srand(time(0));
	for(i=0; i<SIZE; ++i)	dat[i]=rand();	

    // bsort
    for(i=1; i<SIZE; ++i){
        for(j=0; j<SIZE-1; ++i) {
            if(dat[j]>dat[j+1]){
                temp= dat[j+1];
                dat[j+1]= dat[j]; 
                dat[j]= temp;
            }
        }
    }


    // print
    printf("\n");
    for(i=0; i<SIZE; ++i)	printf("%6d",dat[i]);

}


	
