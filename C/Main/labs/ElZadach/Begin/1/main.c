#include <stdio.h>
#include <stdarg.h> //for sum func with changed numbers of arg
#include <math.h>
#define PI 3.14

int expo (int arg, int step);
int sum_int_unl(int a, ...);//(кол-во, параметр1, параметр2 ...)
double average (double a, double b);
void swap (double* a, double* b);

void korni (double a, double b, double c, double* x12);
double average_geom(double a, double b);
double circ_len (int a);
int cub_s (int a);
int cub_v (int a);
int perimetr_square(int a);
int area_square  (int a);
int perimetr_rectangle (int a, int b);
int area_rectangle (int a, int b);



void main () {
    int a=2, b=3, c=4;
    double x12[2]={0,0};
    printf("1)perimetr= %d\n",perimetr_square(a));
    printf("2)area= %d\n",area_square(a));
    printf("3)area=%d, perim=%d\n", area_rectangle(a,b), perimetr_rectangle(a,b));
    printf("4)Lenght circle= %.2lf\n", circ_len(a));
    printf("5)V cub=%d, S cub=%d\n", cub_v(a), cub_s(a));
    printf("6)v= %d, S= %d\n", a*b*c, 2*(a*b+b*c+a*c));
    printf("7)L= %.2lf, S= %.2lf\n", 2*PI*a, PI*expo(a,2));
    printf("8)%lf\n", average(a,b));
    printf("9)%lf\n", average_geom(a,b));
    printf("10)+%d, -%d, *%d, //%lf\n", expo(a,2)+expo(b,2), expo(a,2)-expo(b,2), expo(a,2)*expo(b,2), expo(a,2)/expo(b,2));
    printf("11)modul. abs cel, fabs double\n");
    printf("12)%lf, %d\n", sqrt(expo(a,2)+expo(b,2)), sum_int_unl(3,a,b,c));
    printf("13)s1=%.2lf, s2=%.2lf, s3=%.2lf\n", PI*expo(b,2), PI*expo(a,2), PI*expo(b,2) - PI*expo(a,2));
    korni(a,b,c,x12);
    printf("\n39)%c %c", x12[0], x12[1]);
    
}

double average (double a, double b){
    return (a+b)/2;
}

int sum_int_unl(int a, ...){ //(кол-во, параметр1, параметр2 ...)
    int res=0;
    va_list factor;
    va_start (factor, a);
    for(int i=0;i<a;i++)
        res+=va_arg(factor, int);
    va_end(factor);
    return (res);
}

int expo (int arg, int step){
    int res=arg,i;
    for (i=1;i<step;i++)
        res*=arg;
    return res;
}

void korni (double a, double b, double c, double* x12){
    int i,j=-1, te[2];
    double d;
    d=b*b-4*a*c;
    d=sqrt(d);
    //printf("%lf %lf %lf",a,b,c);
    for(i=0;i<2;i++,j+=2){
        printf("%d %d\n", i,j);
        x12[i]=((-b+j*d)/2*a);
    }
    printf("0-%lf 1-%lf", x12[0], x12[1]);
    if (x12[1]>x12[0]){
        printf("%0-lf 1-%lf", x12[0], x12[1]);
        //swap(x12[0], x12[1]);

    }
}

void swap (double* a, double* b){
    double tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}


double average_geom(double a, double b){
    return sqrt(a*b);
}

double circ_len (int a){
    return(PI*(double)a);
}

int cub_s (int a){
    return 6*(expo(a,2));
}

int cub_v (int a){
    return expo(a,3);
}

int perimetr_rectangle (int a, int b){
    return 2*(a+b);
}

int area_rectangle (int a, int b){
    return a*b;
}

int perimetr_square(int a){
    return a*4;
}

int area_square(int a){
    return a*a;
}