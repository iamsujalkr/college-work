#include <stdio.h>

void main() {
    //taking number from user
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int tnum = num;

    int reverse, rem, sum = 0;
    reverse = 0;
    while(tnum != 0) {
        rem = tnum % 10;
        sum += rem;
        tnum /= 10;
        reverse = (reverse * 10) + rem;
    }

    printf("The reverse number is : %d", reverse);
    printf("\nThe sum of digits of %d is : %d", num,sum);

}
