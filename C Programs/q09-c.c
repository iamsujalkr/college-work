//Program to print '12345' pattern
#include <stdio.h>

void main() {
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    //printing pattern
    for (int i = num; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            printf("%d", i);
        }
        printf("\n");
    }

}