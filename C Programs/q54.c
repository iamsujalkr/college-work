//Program to print the pattern of N rows
#include <stdio.h>

int main() {
    //taking no of rows from user
    int rows;
    printf("Enter the no of rows :  ");
    scanf("%d", &rows);

    //intialsing start of pattern
    int start = 1;

    //loop to print pattern
    for(int i = 1; i <= rows; i++) {
        int col = 1;
        int j;
        for(j = start; col <= i; j++) {
            printf("%d\t", j);
            col++;
        }
        start = j;
        printf("\n");
    }

    return 0;
    
}