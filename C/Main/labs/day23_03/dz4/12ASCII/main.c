#include <stdio.h>
#define Start 30

void main (){
    int i, j, n=0;
    for (i=Start;i<Start+17;i++){
        //for (j=0;j<4;j++){
            if (i==Start) {}
            else printf("%x- %4c %8d %8o %1X\n",i/16, i,i,i,i);
            //n++;
        //}
    }
}