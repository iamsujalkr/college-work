#include <stdio.h>
#include <stdlib.h>

struct cnode {
    int info;
    struct cnode *prev, *next;
}*first = NULL;
typedef struct cnode NODE;

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
        new_node->prev = last;
        new_node->next = first;

        if(first == NULL){
            first = new_node;
            last = new_node;
            first->next = first;
            first->prev = first;
        }
        else{
            last->next = new_node;
            last = new_node;
            first->prev = last;
        }
    }
}

void forward() {
    NODE* ptr = first;
    do {
        printf("%d  ->  ", ptr->info);
        ptr = ptr->next;
    }while(ptr != first);
    printf("End");
}

void backward() {
    NODE* ptr = first->prev;
    do {
        printf("%d  ->  ", ptr->info);
        ptr = ptr->prev;
    }while(ptr != first->prev);
    printf("End");
}