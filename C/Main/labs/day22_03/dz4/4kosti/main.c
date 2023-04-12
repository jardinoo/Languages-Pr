#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print (int p1, int p2, int t1, int t2){

}

void main () {

    int n, t1=0, t2=0,a;
    printf("Kolvo?");
    scanf("%d",&n);
    srand(time(NULL));
    //int pl1=rand()%100; printf ("%4s = %3d\n", "Pl1", rand()%100);
    //int pl2=rand()%100; printf ("%4s = %3d\n", "Pl2", rand()%100);

    printf("%8s %8s %8s %8s\n", "Player1", "Player2", "P1 Total", "P2 Total");

    for (int i=0;i<n;i++){
        //printf("%8s %8s\n", "Player1", "Player2");
        int pl1=rand()%100; //printf ("%8d", pl1);
        int pl2=rand()%100;
        printf ("%8d %8d",pl1, pl2);
        if (pl1>pl2) {t1++; printf("%8d %8d Player1 ++\n", t1, t2);}
        else {t2++; printf("%8d %8d Player2 ++\n", t1, t2);};
    }
    if (t1>t2) printf ("P1 Win");
    else printf ("P2 Win");
    printf(" %d:%d", t1, t2);
}