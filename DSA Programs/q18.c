#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next;
};
typedef struct node NODE;

void create_node(NODE **first);
void merge(NODE *list1, NODE *list2, NODE **merge_list);

void main() {
    NODE *list1 = NULL, *list2 = NULL;
    printf("Creating 1 linked list :-\n");
    create_node(&list1);
    printf("Linked list 1 :-\n");
    NODE *ptr = list1;
    while(ptr != NULL) {
        printf("%d  ->  ",ptr->info);
        ptr = ptr->next;
    }
    printf("NULL");
    printf("\nCreating 2 linked list :-\n");
    create_node(&list2);
    printf("Linked list 2 :-\n");
    ptr = list2;
    while(ptr != NULL) {
        printf("%d  ->  ",ptr->info);
        ptr = ptr->next;
    }
    printf("NULL");
    printf("\nMerging both linked list\n");
    NODE *merge_list = NULL;
    merge(list1, list2, &merge_list);
    ptr = merge_list;
    while(ptr != NULL) {
        printf("%d  ->  ",ptr->info);
        ptr = ptr->next;
    }
    printf("NULL");
}

void create_node(NODE **first) {
    NODE* last = NULL;
    int total_nodes;
    printf("Enter the number of nodes you want to create :  ");
    scanf("%d", &total_nodes);
    for(int i = 1; i <= total_nodes; i++){
        NODE* new_node = (NODE*)malloc(sizeof(NODE));
        printf("Enter Node %d info :  ", i);
        scanf("%d", &new_node->info);
        new_node->next = NULL;

        if(*first == NULL){
            *first = new_node;
            last = new_node;
        }
        else{
            last->next = new_node;
            last = new_node;
        }
    }
}

void merge(NODE *list1, NODE *list2, NODE **merge_list) {
    NODE* ptr1 = list1;
    NODE* ptr2 = list2;
    NODE* new_node, *last = NULL;
    while(ptr1 != NULL && ptr2 != NULL) {
        if(ptr1->info < ptr2->info) {
            new_node = (NODE*)malloc(sizeof(NODE));
            new_node->info = ptr1->info;
            new_node->next = NULL;
            ptr1 = ptr1->next;
        }
        else if (ptr1->info > ptr2->info) {
            new_node = (NODE*)malloc(sizeof(NODE));
            new_node->info = ptr2->info;
            new_node->next = NULL;
            ptr2 = ptr2->next;
        }
        else {
            new_node = (NODE*)malloc(sizeof(NODE));
            new_node->info = ptr2->info;
            new_node->next = NULL;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        if(*merge_list == NULL) {
            *merge_list = new_node;
            last = new_node;
        }
        else {
            last->next = new_node;
            last = new_node;
        }
    }
    while(ptr1 != NULL) {
        new_node = (NODE*)malloc(sizeof(NODE));
        new_node->info = ptr1->info;
        new_node->next = NULL;
        ptr1 = ptr1->next;
        last->next = new_node;
        last = new_node;
    }
    while(ptr2 != NULL) {
        new_node = (NODE*)malloc(sizeof(NODE));
        new_node->info = ptr2->info;
        new_node->next = NULL;
        ptr2 = ptr2->next;
        last->next = new_node;
        last = new_node;
    }
}