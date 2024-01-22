#include <stdio.h>

void main() {
    int opr;
    printf("\n----  Calculator  ----");
    printf("\nChoose any of the following operation :-");
    printf("\n1 - Addition");
    printf("\n2 - Subtraction");
    printf("\n3 - Multiplication");
    printf("\n4 - Division");
    printf("\n5 - Average");
    printf("\n6 - Percentage");
    printf("\nEnter the operation : ");
    scanf("%d", &opr);
    printf("\n");

    int a,b;
    float a1,b1;
    int total,num,sum = 0;
    switch (opr)
    {
    case 1:
        printf("\nEnter the 1 Number to add :  ");
        scanf("%d", &a);
        printf("Enter the 2 Number to add :  ");
        scanf("%d", &b);
        printf("The Sum is %d", a+b);
        break;
    case 2:
        printf("\nEnter the 1 Number to subtract from :  ");
        scanf("%d", &a);
        printf("Enter the 2 Number to subtract :  ");
        scanf("%d", &b);
        printf("The Differnce is %d", a-b);
        break;
    case 3:
        printf("\nEnter the 1 Number to multiply :  ");
        scanf("%d", &a);
        printf("Enter the 2 Number to multiply :  ");
        scanf("%d", &b);
        printf("The Product is %d", a*b);
        break;
    case 4:
        printf("\nEnter the Divident :  ");
        scanf("%f", &a1);
        printf("Enter the Divisor :  ");
        scanf("%f", &b1);
        printf("The Quotient is %.2f", a1/b1);
        break;
    case 5:
        printf("\nEnter the total numbers you want average of : ");
        scanf("%d", &total);
        for(int i = 1; i <= total; i++) {
            printf("Enter the Number %d : ", i);
            scanf("%d", &num);
            sum += num;
        }
        printf("The Average of %d Numbers is %.2f", total, (float)sum/total);
        break;
    case 6:
        printf("\nEnter the Marks obtained :  ");
        scanf("%d", &a);
        printf("Enter the total marks :  ");
        scanf("%d", &b);
        printf("The Percentage is %.2f", ((float)a/b) * 100);
        break;
    default:
        printf("\nOops! You entered the wrong character");
        break;
    }

}