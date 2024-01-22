#include <stdio.h>
#include <stdlib.h>

void main() {
    char *ptr[2], *temp;

    for(int i = 0; i < 2; i++){
        printf("Enter name %d : ", i+1);
        ptr[i] = (char*)malloc(100 * sizeof(char));
        gets(ptr[i]);
    }

    temp = ptr[0];
    ptr[0] = ptr[1];
    ptr[1] = temp;

    printf("\nAfter swapping: \n");
    printf("Name 1: %s\n",ptr[0]);
    printf("Name 2: %s",ptr[1]);

    free(ptr[0]);
    free(ptr[1]);
}