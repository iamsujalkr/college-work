#include <stdio.h>

struct Employee{
    char id[4];
    char name[50];
    int salary;
}e1;

void main(){
    printf("Enter the Employee ID - ");
    scanf("%s", e1.id);
    printf("Enter the Employee Name - ");
    fflush(stdin);
    fgets(e1.name, 50, stdin);
    printf("Enter the Employee Salary - ");
    scanf("%d", &e1.salary);

    printf("\nThe details of employee is :-\n");
    printf("Employee ID - %s\n", e1.id);
    printf("Name - %s", e1.name);
    printf("Salary - Rs.%d", e1.salary);
}