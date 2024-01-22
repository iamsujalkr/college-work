//Program to find the largest of 3 nos. using conditional operators
#include <stdio.h>

int main() {
    //taking three numbers from user
    int num1,num2,num3;
    printf("Enter Number 1 : ");
    scanf("%d", &num1);
    printf("Enter Number 2 : ");
    scanf("%d", &num2);
    printf("Enter Number 3 : ");
    scanf("%d", &num3);

    //finding largest number through conditional operators
    int max;
    max = (num1 >= num2 && num1 >= num3)? num1 : (num2 >= num1 && num2 >= num3)? num2 : num3;
    printf("The largest of given 3 numbers is : %d", max);

    return 0;
}
