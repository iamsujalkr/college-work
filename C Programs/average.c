//Program to calculate average of three numbers
#include <stdio.h>

int main() {
    //taking numbers from user
    int a,b,c;
    printf("Enter your first number : ");
    scanf("%d", &a);
    printf("Enter your second number : ");
    scanf("%d", &b);
    printf("Enter your third number : ");
    scanf("%d", &c);

    //printing the average to user
    printf("The average of given numbers is : %f", (a + b + c) / 3.0);
    return 0;
}