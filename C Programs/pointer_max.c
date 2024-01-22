#include <stdio.h>

int max(int *a, int *b);

int main() {
    int num1,num2;
    printf("Enter the Number 1 : ");
    scanf("%d", &num1);
    printf("Enter the Number 2 : ");
    scanf("%d", &num2);

    printf("%d is maximum number", max(&num1, &num2));
}

int max(int *a, int *b) {
    int m;
    m = (*a > *b)? *a : *b;
    return m;
}