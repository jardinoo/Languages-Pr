#include <stdio.h>

void main () {
    int i=1, j=0, n;

    //a) cel chislo po vvodu

    // scanf("%d", &n);

    // for(;i<=10;i++) {
    //     printf ("%d*%d=%d\n",i,n,i*n);
    // }

    //b) tablica Pifagora
    
    // for (i=0;i<=10;i++){
    //     printf("%3d", i);
    //     for (j=1;j<=10;j++){
    //         if (i==0) printf("%3d", j);
    //         else {
    //             printf("%3d", i*j);
    //         }
    //     }
    //     printf("\n");
    // }

    //c)

    // for (i=2;i<10;i++){
    //     for (j=1;j<=10;j++){
    //         if (j%6==0) printf("\n");
    //         printf("%3d", i*j);
    //     }
    //     printf("\n \n");
    // }

    //for (i=0;i<=2;i++) {
        // for (j=2;j<=9;j++) {
        //     if (j==6) printf("\n");
        //     for(int k=2;k<=9;k++){
        //         if (j<5){
        //             printf("%2d",j*k);
        //         }
        //         else {
        //             printf("%2d",j*k);
        //         }
        //     }
        //     printf(" ");
        // }
    //}


    int string=1;
    for(i=2;i<10;i++){
        for (j=1;j<=10;j++){
            if (string==1) {if (j<=5) printf("%2d",i*j);}
            else {if (j>5) printf("%2d",i*j);}
            if ((i==5)&&(j==5)) {printf("\n"); string==2;i=2;}
             
            if ((i==5)&&(j=10)) {printf("\n\n");}
        }
    }
}