#include <stdio.h>
#include <stdlib.h>

struct dnode {
    int info;
    struct dnode *prev, *next;
}*first = NULL;
typedef struct dnode NODE;

void create_node();
void forward();
void sorted_insert();
void unsorted_insert();

void main() {
    printf("Choose from the following operations :-");
    printf("\n1 -- Insertion in sorted double linked list");
    printf("\n2 -- Insertion in unsorted double linked list");
    printf("\nEnter your operation :  ");
    int user_opr;
    scanf("%d", &user_opr);

    switch (user_opr) {
    case 1:
        create_node();
        printf("Current linked list :-\n");
        forward();
        sorted_insert();
        printf("\nUpdated linked list :-\n");
        forward();
        break;
    case 2:
        create_node();
        printf("Current linked list :-\n");
        forward();
        unsorted_insert();
        printf("\nUpdated linked list :-\n");
        forward();
        break;
    default:
        printf("You entered an invalid operation");
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
        new_node->prev = NULL;
        new_node->next = NULL;

        if(first == NULL){
            first = new_node;
            last = new_node;
        }
        else{
            last->next = new_node;
            new_node->prev = last;
            last = new_node;
        }
    }
}

void forward() {
    NODE* ptr = first;
    printf("NULL  ->  ");
    while(ptr != NULL){
        printf("%d  ->  ", ptr->info);
        ptr = ptr->next;
    } 
    printf("NULL");
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
        first->prev = new_node;
        new_node->prev = NULL;
        first = new_node;
    }
    else {
        while (ptr->next != NULL) {
            if(element < ptr->next->info) {
                new_node->prev = ptr;
                new_node->next = ptr->next;
                ptr->next->prev = new_node;
                ptr->next = new_node;
                break;
            }
            ptr = ptr->next;
        }
    }
    if(ptr->next == NULL) {
        new_node->next = NULL;
        new_node->prev = ptr;
        ptr->next = new_node;
    }
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
        new_node->prev = NULL;
        first->prev = new_node;
        first = new_node;
    }
    else {
        while (count < pos - 1 && ptr->next != NULL) {
            count++;
            ptr = ptr->next;
        }
        if(ptr->next == NULL) {
            new_node->next = NULL;
            new_node->prev = ptr;
            ptr->next = new_node;
        }
        else {
            new_node->prev = ptr;
            new_node->next = ptr->next;
            ptr->next->prev = new_node;
            ptr->next = new_node;
        }
    }  
}