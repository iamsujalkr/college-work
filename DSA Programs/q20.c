#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node *next;
};
typedef struct node NODE;

void create_node(NODE **first);
void split(NODE **first, NODE **odd_list, NODE **even_list);

void main() {
    NODE *first = NULL;
    create_node(&first);
    printf("Main linked list:-\n");
    NODE *ptr = first;
    while(ptr != NULL) {
        printf("%d  ->  ", ptr->info);
        ptr = ptr->next;
    }
    printf("NULL");
    printf("\nSplitting the linked list\n");
    NODE *odd_list = NULL, *even_list = NULL;
    split(&first, &odd_list, &even_list);
    printf("Odd linked list :-\n");
    ptr = odd_list;
    while(ptr != NULL) {
        printf("%d  ->  ", ptr->info);
        ptr = ptr->next;
    }
    printf("NULL");
    printf("\nEven linked list :-\n");
    ptr = even_list;
    while(ptr != NULL) {
        printf("%d  ->  ", ptr->info);
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

void split(NODE **first, NODE **odd_list, NODE **even_list) {
    NODE *ptr = *first;
    NODE *new_node, *odd = NULL, *even = NULL;
    while (ptr != NULL) {
        new_node = (NODE*)malloc(sizeof(NODE));
        new_node->info = ptr->info;
        new_node->next = NULL;
        if(ptr->info % 2 == 0) {
            if(*even_list == NULL) {
                *even_list = new_node;
                even = new_node;
            }
            else{
                even->next = new_node;
                even = new_node;
            }
        }
        else{
            if(*odd_list == NULL) {
                *odd_list = new_node;
                odd = new_node;
            }
            else{
                odd->next = new_node;
                odd = new_node;
            }
        }
        ptr = ptr->next;
    }
}