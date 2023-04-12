#include <stdio.h>

int main (){
    int rost, ves;
    scanf ("%d %d", &rost, &ves);

    if (rost-ves < 100) printf("poxydei");
    else if (rost-ves > 100) printf("kushai solnishko");
    else printf ("wow, Master balanca!");
    return 0;
}