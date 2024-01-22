#include <stdio.h>

int main()
{
    int num,flag = 0;
    printf("Enter the number : ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            flag += 1;
            break;
        }
    }

    if (flag > 0) {
        printf("%d is not a Prime Number", num);
    } else {
        printf("%d is a Prime Number", num);
    }

    return 0;
}