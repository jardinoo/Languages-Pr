#include <stdio.h>

void main (){
    long int o;
    scanf("%lld", &o);
    while (o>0) {printf("%d",o%10); o/=10;}
}