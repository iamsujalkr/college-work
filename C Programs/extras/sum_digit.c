//Program to calculate sum of digits of a number through recurssion
#include <stdio.h>

int sum(int num);

void main() {
    int num;
    printf("enter the number : ");
    scanf("%d", &num);
    
    printf("%d", sum(num));
}

int sum(int num) {
    if (num / 10 == 0) {
        return num % 10;
    }
    int rem = num % 10;
    int tnum = num / 10;
    int total = sum(tnum) + rem;
}