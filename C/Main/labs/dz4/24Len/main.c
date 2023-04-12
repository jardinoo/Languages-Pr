#include <stdio.h>
#include <string.h>

void len(char *p, int *a){
    int tmpwrds=0, flag=0;
    while (*p!='\0') 
    {
        a[0]++;
        if ((*p>='a')&&(*p<='z')) {a[1]++; tmpwrds++;}
        if ((*p>='0')&&(*p<='9')) {a[2]++; flag=1;}
        if (*p==32) {a[3]++; flag=1;}
        if (flag==1){
            if (tmpwrds>=2){
                a[4]++;
            }
            flag=0;
            tmpwrds=0;
        }
        //printf("%c %d\n",*p,a[1]);
        *p++;
    }
}

void main(){
    char s[256];
    int l[]={0,0,0,0,0,1}; 
    //0len vsego, 1 bukv, 2 chisel, 3probelov, 4 slov, 5 predl 
    //system("clear");
    gets(s);
    len(s,l);
    printf("simvol= %d\nbukv= %d\nchisel= %d\nprobel= %d\nslov= %d\npredl= %d",l[0], l[1], l[2], l[3], l[4], l[5]);
}