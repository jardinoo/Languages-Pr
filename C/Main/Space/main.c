#include <stdlib.h>
#include <stdio.h>
#define SIZE 10

void saveText(char* name,int* d, int n){
    FILE* pf=fopen(name,"w");
    if (pf==0) return;
    
    int i=0;
    for(;i<n; ++i) fprintf(pf,"%d ",d[i]);
    fclose(pf);
}
void readText(const char* name){
    FILE* pf=fopen(name,"r");
    if (pf==0) return;

    char num;
    while(fscanf(pf,"%c",&num)>0){
        if ((num>='0' && num<='9') || (num=' '))
            printf("%c",num);
    } 
    fclose(pf);
}


void main (){
    // int a[SIZE]={1,2,3,4,2,4,3,1,3,4};
    // //saveText("text.txt",a,SIZE);
    // //readText("text.txt");
    // union Test {
    //     char c[40];
    //     long num;
    //     int f;
    //     int i;
    // };
    // union Test t1;
    // t1.f=2;
    // t1.num=400000;
    // struct Date {
    //     int a;
    // };
    // struct Date t1w;
    // struct Date t2w;
    // t1w.a=3;
    // t2w.a=2;

    
    // printf("%d", t1w==t2w);


    struct Test   { 			// Все поля по 8 байтов
	_Alignas(8) short a;
	_Alignas(4) long b;
	_Alignas(8) char f; 
};
struct Test t;
unsigned char c;
printf("size=%d\n", sizeof(c));
printf("%d %d %d\n",_Alignof(t.a),_Alignof(t.b),_Alignof(t.f));   
    
}