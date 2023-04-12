#include <stdio.h>

int main ()
{
    int k2, k3, k4;
    scanf ("%d %d %d", &k2, &k3, &k4);

    k2= k2/10 + k2%10;
    printf ("sum of 2nat= %d\n", k2);
    //432  4         32 -- 3       2 = 9
    k3= k3/100 + ((k3%100)/10) + k3%10;
    printf ("sum of 3nat= %d\n", k3);
    //4321 4          321 -- 3          21    2       1
    k4= k4/1000 + ((k4%1000)/100) + ((k4%100)/10) + k4%10;
    printf ("sum of 4nat= %d\n", k4);

    return 0;
}