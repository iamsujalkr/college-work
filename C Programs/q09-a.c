#include <stdio.h>

int main() {
    int num;
    char pt = '*';
    printf("Enter number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", pt);
        }
        printf("\n");
    }

    return 0;
       
}