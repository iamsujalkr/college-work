//Program to print the sum of series '1-1/2...n' terms
#include <stdio.h>

int main() {
    int num;
    printf("Enter the number  : ");
    scanf("%d", &num);

    float sum = 1;
    printf("%d  ", 1);
    for(int i = 2; i <= num; i++) {
        if(i % 2 == 0) {
            printf("-  1/%d  ", i);
            sum = sum - ((float)1/i);
        } else {
            printf("+  1/%d  ", i);
            sum = sum + ((float)1/i);
        }
    }
    printf("\nSum is : %f", sum);
    return 0;
}