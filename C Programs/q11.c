#include <stdio.h>
#include <math.h>

int factor(int num);

void main() {
    int num;
    printf("Enter the Nth term : ");
    scanf("%d", &num);

    float sum = 1;
    printf("%d  ", 1);
    for(int i = 2, power = 3; i <= num; i++, power += 2) {
        if(i % 2 == 0) {
            printf("-  %d^%d/%d!  ", i,power,power);
            sum -= pow(i,power) / factor(power);
        } else {
            printf("+  %d^%d/%d!  ", i,power,power);
            sum += pow(i,power) / factor(power);
        }
    }
    printf("\nSum is : %.2f", sum);
}

int factor(int num) {
    if (num == 1) {
        return 1;
    }
    int nm1 = factor(num-1);
    int fac = nm1 * num;
    return fac;
}