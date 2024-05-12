#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* next;
}*first = NULL;
typedef struct node NODE;

void main(){
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

    printf("Your linked list :-\n");
    NODE* ptr = first;
    while(ptr != NULL){
        printf("%d  ->  ", ptr->info);
        ptr = ptr->next;
    }
    printf("NULL");

    NODE* prev_node = NULL;
    NODE* cur_node = first;
    NODE* next_node = NULL;
    while (cur_node != NULL) {
        next_node = cur_node->next;
        cur_node->next = prev_node;
        prev_node = cur_node;
        cur_node = next_node;
    }
    first = prev_node;

    printf("\nReversed linked list :-\n");
    ptr = first;
    while(ptr != NULL){
        printf("%d  ->  ", ptr->info);
        ptr = ptr->next;
    } 
    printf("NULL");
}