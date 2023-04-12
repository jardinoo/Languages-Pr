#include <stdio.h>
int prost (int a);

int main () {
    int a,b;
    
    scanf("%d %d", &a, &b);
    if ((prost(a)) && (prost(b))) printf("2 prostie\n");
    if (a%b == 0) printf ("b delitel a\n");
    if (b%a == 0) printf ("a delitel b\n");
}

int prost (int a) {
    int i;
    for (int i=2; i<a; ++i) {
        if (a%i == 0) {return 0; break;}}
    if (i==a) return 1;
}
