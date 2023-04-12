#include <stdio.h>
#include <stdlib.h>


void main () {
    printf("Vvod \n r dlin (do 70) vis");
    int r=5,x=5,y=10,i,j;
    double angle=360/r;
    //scanf("%d %d %d",&r,&x,&y);

    if ((x<0) || (y<0)) {printf("a or b <0");}
    for (i=0;i<y-r;i++) printf("\n");

    //if (x<r) {for(i=0;i<=r;i++) printf(" ");}
    x+=r;
    for(i=0;i<=r+r;i++){
        if (x<r) {for(i=0;i<=r;i++) printf(" ");}
        if (i<=r) {
            for(j=0;j<x-i;j++) printf(" ");
            printf("*");
        }
        else if (x>r){
            for(j=r;j<x-i;j++) printf(" ");
            printf("*");
        }
        printf("\n");
    }
}