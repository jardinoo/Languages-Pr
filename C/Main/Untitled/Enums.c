#include <stdio.h>
#include <math.h>
#include <string.h>

enum Day{Mon = 1, Tur= 2, Wed=3, Thu=4, Fri=5, Sat=6, Sun = 7};

int main()
{

    enum Day  today = Mon;

    if (today == Sat || today == Sun)
    {
        printf("\nIts the weekend!");
    }
    else
    {
        for(int i = 0; i < 10; i++)
        {
            printf("\nGo to work");
        }
    }


    return 0;
}