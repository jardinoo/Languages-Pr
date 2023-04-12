#include <stdio.h>
#define SIZE1 2
#define SIZE2 4

int main (){
    int matr2[SIZE1][SIZE2] = {   { 2, 4, 5, 3}, 
                                  { 4,54,48,43}   };

    for (int i=0; i<SIZE1; i++){
        printf("\n%d: ", i);
        for (int j=0; j<SIZE2; j++) {
            printf("%d ", matr2[i][j]);
        }
    }
    return 0;
}