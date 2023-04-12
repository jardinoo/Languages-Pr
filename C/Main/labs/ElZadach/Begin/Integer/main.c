#include <stdio.h>

void main(){
    int a=1, b=2, c=3;
    //int f= (((1)&&(a%2!=0))&&(b%2!=0))?printf("1")/*, printf("\n")*/:printf("0");

    int g= (a+b)%2==0?1:0;

    printf("%d",g);
}

void check (int);