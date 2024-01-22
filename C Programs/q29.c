#include <stdio.h>
#include <stdlib.h>

void main() {
    int *ptr;
    ptr = (int*)malloc(5 * sizeof(int));

    for(int i = 0; i < 5; i++){
        printf("Enter the %d Number : ", i+1);
        scanf("%d", &ptr[i]);
    }

    int max = ptr[0];
    int i;
    for(i = 0; i < 5; i++){
        if(max < ptr[i]){
            max = ptr[i];
        }
    }

    printf("\nThe largest element in array is %d", max);
    free(ptr);
}