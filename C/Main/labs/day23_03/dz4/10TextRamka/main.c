#include <stdio.h>

int len (char* p){
    int i=0;
    while (*p++!='\0') i++;
    return i;
}

void main () {
    char s[256];
    int h=0;
    gets (s);
    for (int i=0;i<3; i++){
        for (int j=0; j<len(s)+2; j++){
            if ((i==0) || (i==2)) printf ("%c", 1);
            else if (i==1) {
                printf("|%s|", s); break;}
            //else printf ("%c", 1);
        }
        printf ("\n");
    }
     
    //printf ("%s", s);
}