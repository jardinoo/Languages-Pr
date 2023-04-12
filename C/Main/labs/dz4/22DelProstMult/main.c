#include <stdio.h>

void main (){
    int i,j,n;
    scanf("%d", &n);

    //простые и составные

    // for (i=1;i<=n;i++){
    //     if (n%i==0) printf("%d ",i);
    // }

    //только простые

    if (n%2==0) printf("2 ");
    for (i=3;i<n;i+=2){
        if (n%i==0) printf("%d ",i);
    }
}