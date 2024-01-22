#include <stdio.h>

void main() {
    int array[5];
    int *ptr = array;

    printf("Enter Array elements :-\n");
    for(int i = 0; i < 5; i++) {
        printf("Enter element %d - ",i+1);
        scanf("%d", ptr);
        ptr++;
    }

    ptr = array;

    printf("\nThe Entered Array elements are :-\n");
    for(int i = 0; i < 5; i++){
        printf("Element %d - %d\n",i+1, *ptr);
        ptr++;
    }
}