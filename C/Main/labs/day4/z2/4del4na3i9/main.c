#include <stdio.h>

int main ()
{
    int a;

    scanf ("%d", &a);

    if (((a/1000)+((a/100)%10)+((a/10)%10)+ a%10)%3 == 0)
        printf ("Delitsa na 3 i na 9");
    else printf ("Ne delitsia");

    return 0;
}