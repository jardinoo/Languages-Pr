#include <stdio.h>

int main ()
{
    char a= 0;
    int n= 100;

    for (int i; a<n; printf("%c, ", a), a++);

    return 0;
}