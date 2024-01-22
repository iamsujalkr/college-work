#include <stdio.h>

void main() {
    int array[10];
    printf("Enter Array elements :-\n");
    for(int i = 0; i < 10; i++) {
        printf("Enter Element %d - ", i+1);
        scanf("%d", &array[i]);
    }
    
    int *ptr = array;
    int sum = 0;
    for(int i = 0; i < 10; i++) {
        sum+= *ptr;
        ptr++;
    }
    printf("\nThe Sum is : %d", sum);
}