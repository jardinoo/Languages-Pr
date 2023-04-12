#include <stdio.h>

int main () 
{
    char a=97;

    // for (int i=0; i<10; i++)
    //     printf ("%4.d", i);

    // for (int i=0; i<100; i++){
    //     printf ("\n%4.d", i);

        for (int j=97; j<123; j++) {
            printf ("%d - %2.c \n",j, a);
            a++;
        }
    //}


    return 0;
}