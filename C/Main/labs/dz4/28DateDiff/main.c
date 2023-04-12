//вычисление количества дней между двумя датами в формате dd.mm.yyyy

#include <stdio.h>

int dates(int d, int m, int y){
    int day,i,j; 
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    day=d;
    if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
        days[2]=29;
    for(j=0;j<y;j++){
        for (i=1;i<m;i++) day+=days[i];
    }
    
    return day;
}

void main ()
{
    int d1,m1,y1,d2,m2,y2,i,j,res;
    scanf("%d.%d.%d %d.%d.%d",&d1,&m1,&y1,&d2,&m2,&y2);

    printf("%d days",dates(d1,m1,y1)-dates(d2,m2,y2));
}