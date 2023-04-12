#include <stdio.h>
#include <math.h>
const double PI = 3.1415;

int   main ()
{
    int a, b, r, R, temp, c, h; 
    scanf ("%d %d %d", &R, &r, &h);

    if (R<r)
    {
        temp = R;
        R = r;
        r = temp;
    }
    
    double S, P, katet, S1, S2, V; //((a+b)/2) среднее арифметическое двух значений
                            //(f-32)*(5./9)     c * (9/5.) + 32
    S1 = 2*PI*(R+r)*(h+R-r);
    //katet = sqrt((b/2)*(b/2)+h*h);
    V = PI*h*(R*R-r*r);
    
    
    printf("S= %.3lf\nV= %.3lf\n", S1, V);

    return 0;
}