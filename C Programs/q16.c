#include <stdio.h>

int main() {
    int a,b,sum;
    a = 0;
    b = 1;

    printf("%d\t", a);
    printf("%d\t", b);
    for(int i = 1; i <= 8; i++) {
        sum = a + b;
        printf("%d\t", sum);
        a = b;
        b = sum;
    }

    printf("\n");

    for(int i = 9; i <= 18; i++) {
        sum = a + b;
        printf("%d\t", sum);
        a = b;
        b = sum;
    }

    return 0;
}