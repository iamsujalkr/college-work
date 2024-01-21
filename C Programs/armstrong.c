#include <stdio.h>
#include <math.h> // for pow() 

void main() {
    int num,tnum;
    printf("Enter the number :  ");
    scanf("%d", &num);
    tnum = num;
    int count = 0;
    while (tnum > 0) {
        tnum /= 10;
        count++;
    }

    tnum = num;
    int rem;
    double sum = 0;
    while (tnum > 0) {
        rem = tnum % 10;
        tnum /= 10;
        sum += pow(rem,count);
    }

    if ((int)sum == num) {
        printf("%d is an armstrong number", num);
    } else {
        printf("%d is not an armstrong number", num);
    }

}