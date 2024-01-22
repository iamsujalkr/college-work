
#include <stdio.h>

void main() {
    int num;
    printf("Enter number : ");
    scanf("%d", &num);

    for (int i = 'A'; i < 'A' + num; i++) {
        for (int j = 'A'; j <= i; j++) {
            printf("%c", j);
        }
        printf("\n");
    }

}