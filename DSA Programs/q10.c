#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* next;
}*first = NULL;
typedef struct node NODE;

void create_node();
void display_nodes();
void sorted_delete();
void unsorted_delete();

void main() {
    printf("Choose from the following operations :-");
    printf("\n1 -- Deletion from sorted linked list");
    printf("\n2 -- Deletion from unsorted linked list");
    printf("\nEnter your operation :  ");
    int user_opr;
    scanf("%d", &user_opr);

    switch (user_opr) {
    case 1:
        create_node();
        printf("Current Linked list :-\n");
        display_nodes();
        sorted_delete();
        printf("\nUpdated Linked list :-\n");
        display_nodes();
        break;
    case 2:
        create_node();
        printf("Current Linked list :-\n");
        display_nodes();
        unsorted_delete();
        printf("\nUpdated Linked list :-\n");
        display_nodes();
        break;
    default:
        printf("Oops! you entered an invalid operation");
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

void display_nodes() {
    NODE* ptr = first;
    while(ptr != NULL){
        printf("%d  ->  ", ptr->info);
        ptr = ptr->next;
    } 
    printf("NULL");
}

void sorted_delete() {
    int element;
    printf("\nEnter the element to delete :  ");
    scanf("%d", &element);
    int flag = 1;
    NODE* ptr = first;
    if(element == first->info) {
        first = ptr->next;
        free(ptr);
        flag = 0;
    }
    else {
        while (ptr->next != NULL) {
            if(ptr->next->info == element) {
                NODE* ptr1 = ptr->next;
                ptr->next = ptr1->next;
                free(ptr1);
                flag = 0;
                break;
            }
            ptr = ptr->next;
        }
    }
    if(flag) {
        printf("Element does not exist in linked list");
    }
    else {
        printf("Element deleted successfully");
    }
}

void unsorted_delete() {
    int pos, flag = 0;
    printf("\nEnter the postion to delete :  ");
    scanf("%d", &pos);
    int count = 1;
    NODE* ptr = first;
    if(pos == 1) {
        first = ptr->next;
        free(ptr);
    }
    else {
        while(count < pos - 1 && ptr->next != NULL) {
            count++;
            ptr = ptr->next;
        }
        if(ptr->next == NULL) {
            flag = 1;
        }
        else{
            if(ptr->next->next != NULL) {
                NODE* ptr1 = ptr->next;
                ptr->next = ptr1->next;
                free(ptr1);
            }
            else {
                free(ptr->next);
                ptr->next = NULL;
            }
        }
    }
    if(flag) {
        printf("Node does not exist in linked list");
    }
    else {
        printf("Node deleted successfully");
    }
}