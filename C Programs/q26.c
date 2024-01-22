#include <stdio.h>

int factor(int num);
void fibo(int num);

void main() {
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int factorial = factor(num);
    printf("The factorial of %d is %d", num,factorial);

    printf("\n\nFibonacci Series upto %d term: \n", num);    
    printf("%d %d ",0,1);
    fibo(num-2);   
}

int factor(int num) {
    if (num == 1) {
        return 1;
    }
    int nm1 = factor(num-1);
    int fac = nm1 * num;
    return fac;
}

void fibo(int num) {
    static int n1=0,n2=1,n3;    
    if(num >0) {    
        n3 = n1 + n2;    
        n1 = n2;    
        n2 = n3;    
        printf("%d ",n3);    
        fibo(num-1);    
    }    
}    