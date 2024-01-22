//Program to check if a number is palindrome or not
#include <stdio.h>

int main() {
    //taking number from user
    int num;
    printf("Enter the numbr : ");
    scanf("%d", &num);

    //copying num to a another variable
    int tnum = num;

    //finding reverse of number
    int rem,reverse;
    while (tnum != 0) {
        rem = tnum % 10;
        reverse = reverse*10 + rem;
        tnum /= 10;
    }
    
    //checking if reverse number is equal to original number
    if (num == reverse) {
        printf("%d is Palindrome Number", num);
    } else {
        printf("%d is not a Palindrome Number", num);
    }
    return 0;
}