#include <stdio.h>

int main(){

    double prices[] = {5.0,10.0,15.0,11.0,16.0,130.0,34.0};

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        
        printf("$%.2lf\n", prices[i]);
    }




    return 0;
}