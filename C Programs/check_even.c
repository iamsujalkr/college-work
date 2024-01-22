// Program to check if the number is even or not
#include <stdio.h>

int main() {
    //taking number from user
    int num;
    printf("Enter your number :  ");
    scanf("%d", &num);

    //checking if it is even
    printf("%d", num % 2 == 0);
    return 0;
}