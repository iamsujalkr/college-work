#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int info;
    struct Queue *next;
}*front = NULL, *rear = NULL;
typedef struct Queue Queue;

void enqueue();
void dequeue();
void display();

void main() {
    while(1) {
        printf("\nChoose from the following operations :-");
        printf("\n1 -- Insertion");
        printf("\n2 -- Deletion");
        printf("\n3 -- Display queue");
        printf("\n4 -- Exit");
        printf("\nEnter your operation :  ");
        int user_opr;
        scanf("%d", &user_opr);

        switch (user_opr) {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            if(user_opr != 4) {
                printf("Invalid operation");
            }
            exit(0);
            break;
        }
    }
}

void enqueue() {
    int element;
    printf("\nEnter the element to insert :  ");
    scanf("%d", &element);
    Queue *new = (Queue*)malloc(sizeof(Queue));
    new->info = element;
    new->next = front;
    if(front == NULL) {
        front = new;
        rear = new;
    }
    else{
        rear->next = new;
        rear = new;
    }
    printf("Element inserted\n");
}

void dequeue() {
    if(front == NULL) {
        printf("Queue Underflow\n");
    }
    else if(front == rear) {
        Queue *ptr = front;
        front = NULL;
        rear = NULL;
        printf("Element deleted : %d\n", ptr->info);
        free(ptr);
    }
    else{
        Queue *ptr = front;
        printf("Element deleted : %d\n", ptr->info);
        front = front->next;
        rear->next = front;
        free(ptr);
    }
}

void display() {
    if(front != NULL) {
        Queue *ptr = front;
        printf("\nElements in Queue :-\n");
        do{
            printf("%d   ", ptr->info);
            ptr = ptr->next;
        }while(ptr != front);
        printf("\n");
    }
    else{
        printf("Queue is Empty\n");
    }
}