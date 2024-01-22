//Program to print '12345' pattern
#include <stdio.h>

void main() {
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    //printing pattern
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

}