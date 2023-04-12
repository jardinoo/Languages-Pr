#include <stdio.h>

int main ()
{
    int a;
    scanf ("%d", &a);

    if ((((a/100)%10)+(a%10))-((a/1000)+((a/10)%10)) % 11 == 0)
        printf ("Delitsia na 11");
    else printf ("Ne delitsa");

    return 0;
}