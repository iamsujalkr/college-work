#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* next;
}*first = NULL;
typedef struct node NODE;

void create_node();
void sorted_insert();
void unsorted_insert();
void display_nodes();

void main() {
    printf("Choose from the following operations :-");
    printf("\n1 -- Insertion in sorted linked list");
    printf("\n2 -- Insertion in unsorted linked list");
    printf("\nEnter your operation :  ");
    int user_opr;
    scanf("%d", &user_opr);

    switch (user_opr)
    {
    case 1:
        create_node();
        printf("Current Linked list :-\n");
        display_nodes();
        sorted_insert();
        printf("Updated Linked list :-\n");
        display_nodes();
        break;
    case 2:
        create_node();
        printf("Current Linked list :-\n");
        display_nodes();
        unsorted_insert();
        printf("Updated Linked list :-\n");
        display_nodes();
        break;
    default:
        printf("Oops! You entered an invalid operation");
        break;
    }
}

void create_node() {
    NODE* last = NULL;
    int total_nodes;
    printf("Enter the number of nodes you want to create :  ");
    scanf("%d", &total_nodes);
    for(int i = 1; i <= total_nodes; i++){
        NODE* new_node = (NODE*)malloc(sizeof(NODE));
        printf("Enter Node %d info :  ", i);
        scanf("%d", &new_node->info);
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
}

void sorted_insert() {
    int element;
    printf("\nEnter the element to insert :  ");
    scanf("%d", &element);
    NODE* ptr = first;
    NODE* new_node = (NODE*)malloc(sizeof(NODE));
    new_node->info = element;

    if(element < first->info) {    
        new_node->next = first;
        first = new_node;
    }
    else{
        while (ptr->next != NULL) {
            if(element < ptr->next->info) {
                new_node->next = ptr->next;
                ptr->next = new_node;
                break;
            }
            ptr = ptr->next;
        }   
    }
    if(ptr->next == NULL) {
        new_node->next = NULL;
        ptr->next = new_node;
    }
}

void display_nodes() {
    NODE* ptr = first;
    while(ptr != NULL){
        printf("%d  ->  ", ptr->info);
        ptr = ptr->next;
    } 
    printf("NULL");
}

void unsorted_insert() {
    NODE* ptr = first;
    NODE* new_node = (NODE*)malloc(sizeof(NODE));
    int pos;
    printf("\nEnter the element to insert :  ");
    scanf("%d", &new_node->info);
    printf("Enter the postion to insert at :  ");
    scanf("%d", &pos);
    int count = 1;
    if(pos == 1) {
        new_node->next = first;
        first = new_node;
    }
    else {
        while (count < pos - 1 && ptr->next != NULL) {
            count++;
            ptr = ptr->next;
        }
        if(ptr->next == NULL) {
            ptr->next = new_node;
            new_node->next = NULL;
        }
        else {
            new_node->next = ptr->next;
            ptr->next = new_node;
        }
    }  
}