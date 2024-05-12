#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char name[50];
    int roll;
    int marks[5];
    int avg;
    char result[5];
    struct node *next;
}*first = NULL;
typedef struct node NODE;

void main () {
    NODE *last = NULL;
    int total;
    printf("Enter the total no of students :  ");
    scanf("%d", &total);
    for(int i = 1; i <= total; i++){
        printf("Enter details for studnet %d :-\n", i);
        NODE* new_node = (NODE*)malloc(sizeof(NODE));
        printf("Enter the name :  ");
        fflush(stdin);
        gets(new_node->name);
        printf("Enter the Rollno :  ");
        scanf("%d", &new_node->roll);
        int sum = 0;
        for(int j = 0; j < 5; j++) {
            printf("Enter marks of sub %d  :  ", j+1);
            scanf("%d", &new_node->marks[j]);
            sum+=new_node->marks[j];
        }
        new_node->avg = sum / 5;
        if(new_node->avg < 50) {
            strcpy(new_node->result, "Fail");
        }
        else {
            strcpy(new_node->result, "Pass");
        }
        new_node->next = NULL;

        if(first == NULL){
            first = new_node;
            last = new_node;
        }
        else{
            last->next = new_node;
            last = new_node;
        }
    }

    NODE *ptr = first;
    for(int i = 1; i <= total; i++) {
        printf("\nDetails of Student %d :-\n", i);
        printf("Name : %s\n", ptr->name);
        printf("Roll no : %d\n", ptr->roll);
        for(int j = 1; j <= 5; j++) {
            printf("Sub %d : %d   ", j, ptr->marks[j-1]);
        }
        printf("\nAverage : %d\n", ptr->avg);
        printf("Result : %s", ptr->result);
        ptr = ptr->next;
    }
}