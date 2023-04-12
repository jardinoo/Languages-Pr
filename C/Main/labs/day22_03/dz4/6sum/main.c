#include <stdio.h>

void main (){
    int s, sum=0;
    scanf ("%d", &s);
    for (int i=0; i<s; i++){
        sum+= s%10;
        s/=10;
    }
    printf ("Sum= %d", sum);
}