//Program for our own pow function
#include <stdio.h>

int power(int num, int exp);

void main() {
    int num,exp;
    printf("Enter the number and power : ");
    scanf("%d%d", &num,&exp);
    printf("%d", power(num,exp));
}

int power(int num, int exp) {
    int total = 1;
    for (int i = 1; i <= exp; i++) {
        total *= num;
    }
    return total;
}