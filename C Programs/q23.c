#include <stdio.h>

int main() {
    int basic_salary;
    printf("Enter the basic salary : ");
    scanf("%d", &basic_salary);

    float da,hra;
    if(basic_salary < 1500) {
        hra = (10/100.0) * basic_salary;
        da = (90/100.0) * basic_salary;
    } else {
        hra = 500;
        da = (98/100.0) * basic_salary;
    }
    
    float ctc;
    ctc = basic_salary + hra + da;
    printf("The CTC is Rs. %.2f", ctc);
    
    return 0;

}