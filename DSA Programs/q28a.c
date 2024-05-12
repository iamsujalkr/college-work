#include <stdio.h>
#include <stdlib.h>

void enqueue_front(int queue[], int *rear, int *front, int size);
void enqueue_rear(int queue[], int *rear, int *front, int size);
void dequeue_front(int queue[], int *front, int *rear, int size);
void dequeue_rear(int queue[], int *front, int *rear, int size);
void peek(int queue[], int front, int size);
void display(int queue[], int front, int rear, int size);

void main() {
    int size;
    printf("Enter the size of Queue :  ");
    scanf("%d", &size);

    int queue[size];
    int front = -1, rear = -1;

    while(1){
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
            enqueue_front(queue, &rear, &front, size);
            break;
        case 2:
            enqueue_rear(queue, &rear, &front, size);
            break;
        case 3:
            dequeue_front(queue, &front, &rear, size);
            break;
        case 4:
            dequeue_rear(queue, &front, &rear, size);
            break;
        case 5:
            peek(queue, front, size);
            break;
        case 6:
            display(queue, front, rear, size);
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

void enqueue_front(int queue[], int *rear, int *front, int size) {
    int element;
    printf("\nEnter the element :  ");
    scanf("%d", &element);
    if(*front == -1) {
        (*front)++;
        (*rear)++;
        queue[(*front)] = element;
        printf("Element inserted\n");
    }
    else if(*front == 0){
        printf("Queue Overflow\n");
    }
    else {
        (*front)--;
        queue[(*front)] = element;
        printf("Element inserted\n");
    }
}

void enqueue_rear(int queue[], int *rear, int *front, int size) {
    int element;
    printf("\nEnter the element :  ");
    scanf("%d", &element);
    if(*rear == -1) {
        (*front)++;
        (*rear)++;
        queue[(*rear)] = element;
        printf("Element inserted\n");
    }
    else if(*rear == size-1){
        printf("Queue Overflow\n");
    }
    else {
        (*rear)++;
        queue[(*rear)] = element;
        printf("Element inserted\n");
    }
}

void dequeue_front(int queue[], int *front, int *rear, int size) {
    if(*front == -1){
        printf("Queue Underflow\n");
    }
    else if(*front == *rear){
        printf("Element deleted from queue : %d\n", queue[(*front)]);
        (*front) = -1;
        (*rear) = -1;
    }
    else {
        printf("Element deleted from queue : %d\n", queue[(*front)]);
        (*front)++;
    }
}

void dequeue_rear(int queue[], int *front, int *rear, int size) {
    if(*rear == -1){
        printf("Queue Underflow\n");
    }
    else if(*front == *rear){
        printf("Element deleted from queue : %d\n", queue[(*front)]);
        (*front) = -1;
        (*rear) = -1;
    }
    else {
        printf("Element deleted from queue : %d\n", queue[(*rear)]);
        (*rear)--;
    }
}

void peek(int queue[], int front, int size) {
    if(front == -1) {
        printf("Queue Underflow\n");
    }
    else {
        printf("Element at front : %d\n", queue[front]);
    }
}

void display(int queue[], int front, int rear, int size) {
    if(front != -1) {
        printf("Elements in Queue :-\n");
        for(int i = front; i <= rear; i++) {
            printf("%d   ", queue[i]);
        }
    }
    else{
        printf("Queue is empty\n");
    }
}