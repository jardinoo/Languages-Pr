#include <stdio.h>

void main  (){
    int a,b,i,j;
    scanf("%d %d", &a,&b);
    if ((a<0) || (b<0)) {printf("<0");}
    else {
        for (i=0;i<a;i++){
            for(j=0;j<b+2;j++){
                if ((j==0) && (i==0)) printf ("%c", 201);
                else if ((j==b+1) && (i==0)) printf ("%c", 187);
                else if ((j==0) && (i==a-1)) printf ("%c", 200);
                else if ((j==b+1) && (i==a-1)) printf ("%c", 188);
                else if (i==0) printf ("%c", 209);
                else if (i==a-1) printf ("%c", 207);
                else if (j==0) printf("%c", 199);
                else if (j==b+1) printf ("%c", 182);
                else printf("%c",206);//197
            }
            printf("\n");
        }
    }
}