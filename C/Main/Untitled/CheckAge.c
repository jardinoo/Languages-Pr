#include <stdio.h>

int main(){

    int age;

    printf("Write your age: ");
    scanf("%d", &age);

    if (age >=18){
        printf("\nYou are old");
    }
    else if (age>0){
        printf("\nyoung boy");
    }
    else if(age == 0){
        printf("\nYou are newer born");
    }
    else{
        printf("\nWho you are?");
    }



    return 0;
}