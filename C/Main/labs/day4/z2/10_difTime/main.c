#include <stdio.h>

int main (int a, int b, int c, int t1, int t2, int t)
{
    scanf ("%d:%d:%d", &a, &b, &c);
    t1= a*3600+ b*60+ c;
    scanf ("%d:%d:%d", &a, &b, &c);
    t2= a*3600+ b*60+ c;
    t= t1-t2;
    if (t<0)
    {
        printf ("-");
        t*=-1;
    }
    printf ("%d:%d:%d", t/3600, t%3600/60, t%60);
}