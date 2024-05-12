#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* next;
}*first = NULL;
typedef struct node NODE;

void create_node();
void display_nodes();
void search();
void bubble();

void main() {
    printf("Choose from the following operations :-");
    printf("\n1 -- Searching from a linked list");
    printf("\n2 -- Sorting the linked list");
    printf("\nEnter your operation :  ");
    int user_opr;
    scanf("%d", &user_opr);

    switch (user_opr)
    {
    case 1:
        create_node();
        printf("Current linled list :-\n");
        display_nodes();
        search();
        break;
    case 2:
        create_node();
        printf("Current linled list :-\n");
        display_nodes();
        bubble();
        printf("\nSorted linled list :-\n");
        display_nodes();
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

void search() {
    int element, flag = 0;
    printf("\nEnter the element to search :  ");
    scanf("%d", &element);
    int count = 0;
    NODE* ptr = first;
    while(ptr != NULL) {
        if(element == ptr->info) {
            flag = 1;
            break;
        }
        ptr = ptr->next;
        count++;
    }
    if(flag) {
        printf("Element found at %d node", count+1);
    }
    else {
        printf("Element does not exist");
    }
}

void bubble(){
    int count = 0, temp;
    NODE* ptr = first, *ptr1;
    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }
    for(int i = 0; i < count - 1; i++) {
        ptr = first;
        ptr1 = ptr->next;
        for(int j = 0; j < count - i - 1; j++) {
            if(ptr->info > ptr1->info) {
                temp = ptr->info;
                ptr->info = ptr1->info;
                ptr1->info = temp;
            }
            ptr = ptr->next;
            ptr1 = ptr1->next;
        }
    }
}