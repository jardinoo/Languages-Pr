#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

void swap (double* a, double *b);
void SortInc3(double *a, double *b, double *c);
void IsPalindrome (int a [], int lenght);
double Factorial (double x);
double Power1 (double a, double b);// Proc37
double Power2 (double a, int n);//Proc38
double Power3(double a, double b);//Proc39

int DigitCount(int k);
int DigitN(int k, int n);

void main () {
    double a=2, b=6, c=3.3;
    int k=10;
    int ar[]={1221,131,1221,21344312,1233,909,435345,435,345,536,22,00,1};

    void *a1=&a, *b1=&b;

    //swap(a1,b1);
    //SortInc3(&a,&b,&c);
    //IsPalindrome(ar,(sizeof(ar)/sizeof(ar[0])));
    //printf("%d",DigitCount(1));
    //printf("%d", DigitN(654321,1));
    //int j=2;

    //printf("%d", sizeof(ar)/sizeof(ar[0]));

     double d=1111;
    // double* p1;
    // double** p2;
    // p1=&d;
    // p2=&p1;
     
     printf("%lf ",d);
    // printf("%p\n",&d);
    
    // printf("%lf ",*p1);
    // printf("%p\n",p1);
    
    // printf("%lf ",**p2);
    // printf("%p",p2);
}



double Exp1 (double x, double e){
    //exp(x) = 1 + x + x2/(2!)+ x3/(3!) + . . . + xn/(n!) + .
    //Proc40
    double res=1+x;
    res=0;
    return exp(res);
}

double Power3(double a, double b){
    //printf("%lf ", ((b-(int)b)));
    if ((b-(int)b)>0) return(Power1(a,b));
    else return (Power2(a,b));
}

double Power2 (double a, int n){
    if (n==0) return 1;
    int flag=0;
    if (n<0) {flag=1; n=-n;}
    double res=a;
    for (int i=1;i<n;i++) res*=a;
    if (flag==0) return res;
    else return 1/res;
}

double Power1 (double a, double b){
    return exp(b*log(a));
}

double Factorial (double x){
    //if (n==0) return 0;
    double res=1;
    for(int i=1;i<=x;i++) res*=i;

    return res;
}

void swap (double* a, double* b){
    double tmp;
    tmp= *a;
    *a= *b;
    *b= tmp;
}

void SortInc3(double *a, double *b, double *c){
    double tmp;
    while ((*a>*b)||(*b>*c)){ //
        if (*a>*b){
            tmp=*b;
            *b=*a;
            *a=tmp;
        }
        if (*b>*c){
            tmp=*c;
            *c=*b;
            *b=tmp;
        }
    }
}

void IsPalindrome (int a[], int lenght){
    int i=0,p,k,num,lenght_local, len_now;
    for (;i<lenght;i++){
        int flag=0, end=1;
        int begin=DigitCount(a[i]);
        for (;begin>end;begin--, end++){
            if ((DigitN(a[i],end))!=(DigitN(a[i],begin)))
                flag=1; 
            //printf("%d", len_now);
            //begin++; end++;  
        }
        if (flag==0) printf("%d True\n",a[i]);
        else printf("%d False\n",a[i]);
    }
}

int DigitN(int k, int n){
    for(int i=1;i<n;i++) {k/=10;}
    if (k==0) return -1;
    k%=10;
    return k;
}

int DigitCount(int k){
    int i;
    for (i=0;k!=0;i++, k/=10);
    return i;
}