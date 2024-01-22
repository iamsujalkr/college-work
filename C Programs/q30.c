#include <stdio.h>

void main(){
    char str[100];
    printf("Enter the String - ");
    fgets(str, 100, stdin);

    printf("\nPrinting through pointer\n");
    char *ptr = str;
    while(*ptr != '\0'){
        printf("%c", *ptr);
        ptr++;
    }
}