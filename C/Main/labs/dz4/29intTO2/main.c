//переводит целое в 2-е
#include <stdlib.h>
#include <stdio.h>

void main (){
    int i=1,j,num,res;
    scanf("%d",&num);
    
    //while (num++!='\0') printf("%c",num);
    //printf("\n");
    while(i<num) {i*=2; printf("%d",i);};
    printf(" ");
    for(;i>=1;){
        if(num>=i){
            printf("1");
            num-=i;
        }
        else printf("0");
        i/=2;
    }
    printf("\n");



}