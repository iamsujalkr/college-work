#include <stdio.h>

void swap(int *x, int *y);

void main() {
    int a = 5;
    int b = 10;
    printf("Before Swapping through call by reference\n");
    printf("a = %d : b = %d\n", a,b);
    swap(&a,&b);
    printf("After Swapping through call by reference\n");
    printf("a = %d : b = %d", a,b);
}

void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}