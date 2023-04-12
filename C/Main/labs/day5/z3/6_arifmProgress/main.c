#include <stdio.h>

int main () {

    int a;
    scanf("%d", &a); //1-2==2-3==3-4 // 2-4==4-6==6-8
    // 2468 8  -   6     2     2     6   -   4    2      2   4      -    2                
    if ((((a%10)-(a/10%10)) == ((a/10%10)-(a/100%10))) && (((a/10%10)-(a/100%10)) == ((a/100%10)-(a/1000))))
        printf ("est arifm progressia");
    return 0;
}