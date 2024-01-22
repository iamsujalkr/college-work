#include <stdio.h>

void main() {
    char *ptr[2], *temp;
    char str1[100];
    char str2[100];

    printf("Enter name 1: ");
    gets(str1);
    printf("Enter name 2: ");
    fflush(stdin);
    gets(str2);

    ptr[0] = str1;
    ptr[1] = str2;
    temp = ptr[0];
    ptr[0] = ptr[1];
    ptr[1] = temp;

    printf("\nAfter swapping: \n");
    printf("Name 1: %s\n",ptr[0]);
    printf("Name 2: %s",ptr[1]);

}