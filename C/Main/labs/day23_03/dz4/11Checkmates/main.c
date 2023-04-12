#include <stdio.h>

void main () {
    for (int i=1; i<10; i++) {
        for (int j=0; j<4; j++){
            //if (i==0) {for (i=0;i<9;i++) printf("%c", 'a'+i);}
            if (i%2==0){
                printf ("%c %c", 176,219);
            }
            else printf ("%c %c", 219,176);
        }
        printf("\n");
    }
}