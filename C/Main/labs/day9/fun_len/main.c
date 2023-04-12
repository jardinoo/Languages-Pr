#include <stdlib.h>
#include<stdio.h>

int len(char *p) {
    int i=0;
    while (p[i]!='\0') i++; //*p++ - лол, тоже заменяет условную проверку
    return i;
}

char* upper(char *p) {
    int i=0;
    for (;i<len(p); i++){
        if ((p[i]<='z') && (p[i]>='a'))
            p[i]-=32;
    }
    return p;
}

void main () {
    //char s1= "Hello Alex!";
    char* s2= "Amsterdam";
    char s3[]= {'a','b','c'};
    char s4[32]= "Hi";

    printf ("%s\n%s\n%s\n",s2,s3,s4);
    printf("%d, %d, %d", len(s2), len(s3), len(s4));
    printf("\n");
    upper(s4);
    printf("%s", s4);

}