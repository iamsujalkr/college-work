#include <stdio.h>

int factor(int n );

void main ()
{
    int n=5;
    printf("%d", factor(n));
}

int factor(int n) {
    if (n == 1) {
        return 1;
    }
    int nm1 = factor(n-1);
    int fac = nm1 * n;
    return fac;
}