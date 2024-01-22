#include <stdio.h>

struct Student{
    char name[10];
    int marks[3];
    int total;
    float percent;
}s[5];

void main(){
    for(int i = 0; i < 5; i++){
        printf("Enter Details of %d Student :-\n", i+1);
        printf("Enter Name - ");
        scanf("%s", s[i].name);
        for(int j = 0; j < 3; j++){
            printf("Enter marks of %d subject - ",j+1);
            scanf("%d", &s[i].marks[j]);
            s[i].total+=s[i].marks[j];
        }
        s[i].percent = s[i].total / 3;
        printf("Percentage = %.2f%\n\n", s[i].percent);
    }
}