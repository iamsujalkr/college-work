#include <stdio.h>

struct Student{
    //Array as a structure member
    char name[50];
    int marks[3];
};

void main(){
    //Array of Structure
    struct Student s[3];
    for(int i = 0; i < 3; i++){
        printf("\nEnter Details of %d Student :-\n", i+1);
        printf("Enter Name - ");
        fflush(stdin);
        fgets(s[i].name, 50, stdin);
        for(int j = 0; j < 3; j++){
            printf("Enter marks of %d subject - ",j+1);
            scanf("%d", &s[i].marks[j]);
        }
    }
}