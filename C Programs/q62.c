#include <stdio.h>
#include <math.h>

void armstrong(int n);
void prime(int n);
void reverse(int n);

void main() {
    int opr;
    printf("\nChoose any of the operstion :-");
    printf("\n1 - Print Armstrong upto N");
    printf("\n2 - Display Prime Numbers between 1 and N");
    printf("\n3 - Reverse of an integer");
    printf("\nEnter the operation : ");
    scanf("%d", &opr);
    printf("\n");

    int n;
    switch (opr)
    {
    case 1:
        printf("\nEnter the Number to print Armstrong Numbers : ");
        scanf("%d", &n);
        armstrong(n);
        break;
    case 2:
        printf("\nEnter the Number to print Prime Numbers : ");
        scanf("%d", &n);
        prime(n);
        break;
    case 3:
        printf("\nEnter the Number to reverse : ");
        scanf("%d", &n);
        reverse(n);
        break;
    default:
        printf("\nOops! You entered the wrong character");
        break;
    }
}

void armstrong(int n) {
    printf("The following are Armstrong numbers :-");
    for(int i = 1; i <= n; i++) {
    int tnum = i;
    //counting the lenght of user input
    int count = 0;
    while (tnum > 0) {
        //eliminates last digit from the number
        tnum /= 10;
        count++;
    }
    //finding sum of digits
    tnum = i;
    int rem;
    double sum = 0;
    while (tnum > 0) {
        //extracting last digit from number
        rem = tnum % 10;
        //eliminates last digit from the number
        tnum /= 10;
        //calculating power of digits
        sum += pow(rem,count);
    }
    //checking if sum is equal to user input
    if ((int)sum == i) {
        printf("\n%d", i);
    }
    }
}

void prime(int n) {
     printf("The following are Prime Numbers :-");
    //loop for every number in range
    for (int i = 1; i <= n; i++) {
        int flag = 0;
        //loop to check the number
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                flag += 1;
                break;
            }
        }
        if (flag == 0) {
            printf("\n%d", i);
        }
    }
}

void reverse(int n) {
    int tnum = n;
    //finding reverse and sum
    int rem, rev = 0;
    while(tnum != 0) {
        rem = tnum % 10;
        tnum /= 10;
        rev = (rev * 10) + rem;
    }
    printf("The reverse number is : %d", rev);

}