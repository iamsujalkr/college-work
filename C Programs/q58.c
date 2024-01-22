#include <stdio.h>

void  main(){
    int a,b;
    int *ptr_a = &a;
    int *ptr_b = &b;
    
    printf("Enter Number 1 - ");
    scanf("%d", ptr_a);
    printf("Enter Number 2 - ");
    scanf("%d", ptr_b);

    printf("\nSum = %d\n", *ptr_a + *ptr_b);
    printf("Difference = %d\n", *ptr_a - *ptr_b);
    printf("Product = %d\n", *ptr_a * *ptr_b);
    printf("Quotient = %d\n", *ptr_a / *ptr_b);
}