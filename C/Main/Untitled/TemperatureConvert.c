#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nIs temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("\nEnter the Temp in C: ");
        scanf("%f", &temp);
        temp = (temp * 9/5)+32;
        printf("\nThe temp in F is: %.1f", temp);
    }
    else if(unit == 'F'){
        printf("\nEnter the Temp in F: ");
        scanf("%f", &temp);
        temp = ((temp -32)*5)/9;
        printf("\nThe temp in C is: %.1f", temp);
    }
    else{
        printf("\n %c is not a valid unit", unit);
    }



  return 0;
}