#include <stdio.h>
#include <stdbool.h>

int main(){

    float temp = 30;
    bool sunny = false;

    if (temp >= 0 && temp<=30 && sunny){
        printf("The weather is Good");
    }
    else{
        printf("The weather is Bad");
    }


    return 0;
}