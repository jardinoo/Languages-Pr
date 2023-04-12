#include <stdio.h>

void main () {
    int i;
    double mult= 1.1, start_km=10, day1=1, den10=start_km, day=0;
    while   (den10<100){
        den10*=mult;
        //printf("%lf ", den10);
        if (day1==10) printf("A) v 10 den- %lf\n", den10);
        if (den10<20) day++;
        day1++;
    }
    printf("B) 20> v den- %0.lf\n", day);
    printf("B) 100> v den- %0.lf\n", day1);

    
}