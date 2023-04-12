#include <stdio.h>
#include <stdlib.h>

// void middle (int h, char s){
//     int j= 1+(h/2);
//     //printf("%d", j);
//     for (int i=0; i<j; i++){
//         printf(" ");
//     }
//     printf ("%c\n", s);
// }


// 1)  *


// void main () {
//     printf ("v'sota suk");
//     int h,i,j,z=1,probel;
//     scanf("%d", &h);

//     //middle (h,'*');
//     for (i=0;i<h;i++){
//         for (int o=i;h-o>0;o++) printf(" ");
//         for (int y=0; y<z; y++) printf("*");
//         z+=2;
//         printf("\n");
//     }
//     for (i=0;i<h;i++) printf(" ");
//     printf("|");

//     //middle(h,'|');
// }



// 2) /|\

void main () {
    printf ("v'sota suk");
    int h,i,j,z=0,probel;
    scanf("%d", &h);

    for (i=0;i<h;i++){
        for (int o=i;h-o>0;o++) printf(" ");
        for (int y=0; y<z; y++) printf("/");
        printf("|");
        for (int y=0; y<z; y++) printf("\\");
        z+=1;
        printf("\n");
    }
    for (i=0;i<h;i++) printf(" ");
    printf("|");
}