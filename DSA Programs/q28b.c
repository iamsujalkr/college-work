#include <stdio.h>
#include <stdlib.h>

struct Queue {
    int info;
    struct Queue *next;
}*front = NULL, *rear = NULL;
typedef struct Queue Queue;

void enqueue_front();
void enqueue_rear();
void dequeue_front();
void dequeue_rear();
void peek();
void display();

void main() {
    while(1) {
        printf("\nChoose from the following operations :-");
        printf("\n1 -- Insertion at front");
        printf("\n2 -- Insertion at rear");
        printf("\n3 -- Deletion from front");
        printf("\n4 -- Deletion from rear");
        printf("\n5 -- Peek");
        printf("\n6 -- Display queue");
        printf("\n7 -- Exit");
        printf("\nEnter your operation :  ");
        int user_opr;
        scanf("%d", &user_opr);

        switch (user_opr) {
        case 1:
            enqueue_front();
            break;
        case 2:
            enqueue_rear();
            break;
        case 3:
            dequeue_front();
            break;
        case 4:
            dequeue_rear();
            break;
        case 5:
            peek();
            break;
        case 6:
            display();
            break;
        default:
            if(user_opr != 7){
                printf("Invalid operqtion");
            }
            exit(0);
            break;
        }
    }
}

void enqueue_front() {
    int element;
    printf("\nEnter the element to insert :  ");
    scanf("%d", &element);
    Queue *new = (Queue*)malloc(sizeof(Queue));
    new->info = element;
    new->next = NULL;
    if(front == NULL) {
        front = new;
        rear = new;
    }
    else{
        new->next = front;
        front = new;
    }
    printf("Element inserted at front\n");
}

void enqueue_rear() {
    int element;
    printf("\nEnter the element to insert :  ");
    scanf("%d", &element);
    Queue *new = (Queue*)malloc(sizeof(Queue));
    new->info = element;
    new->next = NULL;
    if(front == NULL) {
        front = new;
        rear = new;
    }
    else{
        rear->next = new;
        rear = new;
    }
    printf("Element inserted at rear\n");
}

void dequeue_front() {
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
        free(ptr);
    }
}

void dequeue_rear() {
    if(rear == NULL) {
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
        while(ptr->next->next != NULL){
            ptr = ptr->next;
        }
        Queue *ptr1 = ptr->next;
        rear = ptr;
        rear->next = NULL; 
        printf("Element deleted : %d\n", ptr1->info);
        free(ptr1);
    }
}

void peek(){
    if(front != NULL){
        printf("Element at front : %d\n", front->info);
    }
    else{
        printf("Queue is empty\n");
    }
}

void display() {
    if(front != NULL) {
        Queue *ptr = front;
        printf("\nElements in Queue :-\n");
        while (ptr != NULL) {
            printf("%d   ", ptr->info);
            ptr = ptr->next;
        }
        printf("\n");
    }
    else{
        printf("Queue is Empty\n");
    }
}