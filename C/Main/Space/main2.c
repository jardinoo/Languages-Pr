#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int* NewObject(void)
{
    int* p=malloc(2*sizeof(int));
    return p;
}

char main(void) {

    int* p=NewObject();

    *p=14;
    printf("*p-%d\np=%d\nap=%x\n-",*p,p,&p);
    *p=98;
    printf("*p-%d\np=%d\nap=%x\n-",*p,p,&p);
    // free(p);
    int* c=malloc(4*sizeof(int));
    printf("*p-%d\np=%d\nap=%x\n-",*p,p,&p);
    printf("*c-%d\nc=%d\nac=%x\n-",*c,c,&c);
    *c=5;
    printf("*c-%d\nc=%d\nac=%x\n-",*c,c,&c);
    free(c);
    free(p);

    // char phrase[100]="lumberjacks";
    // char array[1000]={0};
    // int i=0;
    // int flag=1;
    // for(;phrase[i]!='\0';i++)
    // {
    //     //printf("%d %c\n",i, phrase[i]);
    //     if (phrase[i]==' ' || phrase[i]=='-') continue;
    //     array[i]=phrase[i];
    //     for(int k=0;k<i;k++){
    //         if(array[k]==phrase[i]){
    //             flag=0;
    //         }
    //     }
    // }
    // return flag;

//     unsigned long long int tota=1;
//     for(int i=0;i<=64;i++)
//     {
//         tota+=tota*2;
//     }
//     printf("%ull", tota);
 }