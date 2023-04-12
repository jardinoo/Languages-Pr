#include <stdio.h>
#define OT 10
#define DO 20
#define SHAG  1

int main () {
    int inter_start= OT, inter_end= DO, shag= SHAG, y,x,rez;
    x=inter_start;
    printf ("%3c %5c =(x+3)*(x+2)\n", 'x', 'y');
    for(int i=2;x<=inter_end;i+=SHAG){
        printf("%3d %5d\n",x, (x+3)*(x+2));
        x+=shag;
        if (OT>=x) break;
    }
    printf("\n");
}