#include <stdio.h>
#include <stdlib.h>

struct dnode {
    int info;
    struct dnode *prev, *next;
}*first = NULL;
typedef struct dnode NODE;

void create_node();
void forward();
void backward();

void main() {
    create_node();
    printf("Forward traversal :- \n");
    forward();
    printf("\nBackward traversal :- \n");
    backward();
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

void backward() {
    NODE* ptr = first;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    printf("NULL  ->  ");
    while(ptr != NULL) {
        printf("%d  ->  ", ptr->info);
        ptr = ptr->prev;
    }
    printf("NULL");
}