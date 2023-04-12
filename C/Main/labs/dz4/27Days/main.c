#include <stdio.h>

//n день в году

void main (){
    int day, month, year, daysArray[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d.%d.%d",&day, &month, &year);

    for(int i=1;i<month;i++) day+=daysArray[i];
    printf("this is day N%d in this year",day);
}