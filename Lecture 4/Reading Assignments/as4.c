#include <stdio.h>
#define power 2

int main()  {
    int N, start;
    long double final=1;

    printf("EPlease enter an exponent: ");
    scanf("%d", &N);

    for(start = 1; start <= N; start++)
    {
        final *= power;
    }
    printf("The power of 2 of %d is %.0Lf", N, final);
}