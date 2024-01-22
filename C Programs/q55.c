#include <stdio.h>

void main() {
    int marks[50];
    float sum = 0;
    for(int i = 0; i < 50; i++) {
        printf("Enter the marks of %d student : ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    printf("\nThe Average marks of class is %.2f ", sum / 50);
}