#include <stdio.h>

void main() {
    int num1,num2;
    printf("Enter the Two number to find HCF and LCM : ");
    scanf("%d%d", &num1,&num2);

    int min,max;
    min = (num1 < num2)? num1 : num2;
    max = (num1 > num2)? num1 : num2;

    int hcf = 1;
    for(int i = 1; i <= min; i++) {
        if(num1%i==0 && num2%i==0) {
            hcf = i;    
        }
    }

    int lcm = 1;
    int i = max;
    while(1) {
        if(i%num1==0 && i%num2==0) {
            lcm = i;
            break;
        }
        i += max;   
    }

    printf("\nHCF of %d and %d = %d", num1,num2,hcf);
    printf("\nLCM of %d and %d = %d", num1,num2,lcm);     
}