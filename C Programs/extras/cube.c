// Program to calculate to cube of a number
#include <stdio.h>
#include <math.h>

int main() {
    // Taking any number from user
    double num;
    printf("Enter your number : ");
    scanf("%d", &num);

    // Printing the cube of given number
    double cube = pow(num, (double)3);
    printf("Your cube is : %f", cube);
    return 0;
}