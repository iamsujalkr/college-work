#include <stdio.h>
#include <string.h>

struct Employee{
    char id[4];
    char name[50];
    int age;
    char address[100];
    char dep[50];
    int sal;
}emp[10];

void main() {
    printf("Enter the details of all the employees :-");
    for(int i = 0; i < 1; i++) {
        printf("\nEnter the info of Employee - %d", i+1);
        printf("\nEmployee Id  -  ");
        fflush(stdin);
        fgets(emp[i].id, 4, stdin);
        printf("Name  -  ");
        fflush(stdin);
        scanf(" %[^\n]s", &emp[i].name);
        printf("Age  -  ");
        scanf("%d", &emp[i].age);
        printf("Address  -  ");
        fflush(stdin);
        fgets(emp[i].address, 100, stdin);
        printf("Department  -  ");
        scanf("%s", emp[i].dep);
        printf("Salary  -  ");
        scanf("%d", &emp[i].sal);
        printf("\n");
    }

    char empid[4];
    printf("Enter the Employee Id to search details of employee  -  ");
    fflush(stdin);
    scanf(" %s", &empid);
    int flag = 0;
    int i;
    for(i = 0; i < 1; i++) {
        int value = strcmp(emp[i].id, empid);
        if(value == 0) {
            flag = 1;
            break;
        }
    }

    if(flag) {
        printf("Name - %s\n", emp[i].name);
        printf("Age - %d years\n", emp[i].age);
        printf("Address - %s", emp[i].address);
        printf("Department - %s\n", emp[i].dep);
        printf("Salary - %d", emp[i].sal);
    }else {
        printf("The employee does not exist for this Id");
    }

}