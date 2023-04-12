#include <stdio.h>

void main(){
    int i=1,j,n;
    scanf("%d",&n);
    j=0;
    printf("0 1 ");
    for(int o=1;o<n;o++){
        printf("%d ",i+j);
        i=i+j;
        j=i-j;
    }
}