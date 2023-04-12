#include <stdio.h>

void main(){
    int i,j,n,flag=0;
    scanf("%d",&n);
    if (n%2==0) flag=1;
    for (i=3;i<n;i+=2){
        if(n%i==0) flag=1;
    }
    if(flag==1) printf("Ne Prost");
    else printf("Prost");
}