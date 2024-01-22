// Program to calculate factorial of a number through loops
#include <stdio.h>

void main()
{
    //taking number from user
    int num, factor;
    printf("enter the  number : ");
    scanf("%d", &num);
    factor = num;

    //loop to calculate factorial
    for (int i = 1; i < num; i++) {
        factor *= i;
    }

    printf("\nThe factorial of %d is %d", num,factor);
}