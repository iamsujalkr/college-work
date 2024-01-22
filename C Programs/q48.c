#include <stdio.h>
#include <stdlib.h>

void main(){
    int *ptr;
    ptr = (int *)calloc(3, sizeof(int));

    printf("Enter Data :-\n");
    for(int i = 0; i < 3; i++){
        printf("ptr[%d] - ",i);
        scanf("%d", &ptr[i]);
    }
    printf("\nNow We cannot access ptr[3] and ptr[4]\n");
    printf("We can access these only after reallocating memory\n");
    ptr = realloc(ptr, 5 * sizeof(int));

    printf("Taking input after using realloc :-\n");
    for(int i = 3; i < 5; i++){
        printf("ptr[%d] - ",i);
        scanf("%d", &ptr[i]);
    }
}