#include <stdio.h>

int main (int a, int b, int c)
{
    scanf ("%d:%d:%d", &a, &b, &c);
    printf ("eto v sec= %d", a*3600+b*60+c);

    return 0;
}