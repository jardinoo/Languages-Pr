#include <stdio.h>

int main() {

    int a= 1, b= 2, c= 3;
    printf("%d, %d, %d,%d, %d, %d,", a, ++a,a,a, b++, ++a+b, a+b++, b);

    return 0;
}