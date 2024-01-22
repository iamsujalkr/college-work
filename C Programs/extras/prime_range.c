// Program to find prime numbers between two numbers
#include <stdio.h>

void main()
{
    //taking range from user
    int num,num2;
    printf("Enter the Range to find Prime Number :  ");
    scanf("%d%d", &num,&num2);

    printf("The following are Prime Numbers :-\n");

    //loop for every number in range
    for (int i = num; i <= num2; i++) {
        int flag = 0;
        //loop to check the number
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag += 1;
                break;
            }
        }
        if (flag == 0) {
            printf("%d\n", i);
        }
    }
}