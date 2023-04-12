#include <stdio.h>

int main(int argc, const char * argv[])
{
    int N;
    scanf("%d",&N);
    if (N >= 2) puts("2");
    for(int n = 3; n <= N; n+=2)
    {
        int prime = 1;
        for(int i = 3; i*i <= n; i+=2)
            if (n%i==0) { prime = 0; break; }
        if (prime) printf("%d\n",n);
    }
}