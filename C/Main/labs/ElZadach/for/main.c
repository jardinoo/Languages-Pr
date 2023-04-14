#include <stdio.h>

double factorial (double a){
    if (a>0)
        return (factorial(a-1)*a);
    else return 1;
}

double expo (double x, double step){
    double res=x;
    for (int i=1;i<=step;i++) res*=x;
    return res;
}

void main (){
    double x=6, res=1+x;
    int k=10,n=7,i,j,sum;
    int array[k][n];
    for (int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            array[i][j]=(j*i+k)%10;
        }
    }

    for (int i=0;i<k;i++){
        if (array[i][1]==2)
                printf("2 vo %d nab - %d\n",i, 2);
        
        else for(int j=0;j<n;j++){
            
        }
        //printf("2 vo %d nab - %d\n",i, sum);
    }
    
    //for (int i=2;i<=n;i++) res+= expo(x,i)/factorial(i);
    //printf("%.3lf",res);
}