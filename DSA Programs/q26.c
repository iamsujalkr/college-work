#include <stdio.h>
#include <stdlib.h>

void enqueue(int queue[], int *rear, int *front, int size);
void dequeue(int queue[], int *front, int *rear, int size);
void peek(int queue[], int front, int size);
void isEmtpy(int front, int size);
void isFull(int rear, int size);
void display(int queue[], int front, int rear, int size);

void main() {
    int size;
    printf("Enter the size of Queue :  ");
    scanf("%d", &size);

    int queue[size];
    int front = -1, rear = -1;

    while(1){
        printf("\nChoose from the following operations :-");
        printf("\n1 -- Insertion");
        printf("\n2 -- Deletion");
        printf("\n3 -- Peek");
        printf("\n4 -- Display queue");
        printf("\n5 -- isEmpty");
        printf("\n6 -- isFull");
        printf("\n7 -- Exit");
        printf("\nEnter your operation :  ");
        int user_opr;
        scanf("%d", &user_opr);

        switch (user_opr) {
        case 1:
            enqueue(queue, &rear, &front, size);
            break;
        case 2:
            dequeue(queue, &front, &rear, size);
            break;
        case 3:
            peek(queue, front, size);
            break;
        case 4:
            display(queue, front, rear, size);
            break;
        case 5:
            isEmtpy(front, size);
            break;
        case 6:
            isFull(rear, size);
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

void enqueue(int queue[], int *rear, int *front, int size) {
    int element;
    printf("\nEnter the element :  ");
    scanf("%d", &element);
    if(*rear == -1) {
        (*front)++;
        (*rear)++;
        queue[*rear] = element;
        printf("Element inserted\n");
    }
    else if (*rear != size-1){
        (*rear)++;
        queue[*rear] = element;
        printf("Element inserted\n");
    }
    else{
        printf("Queue Overflow\n");
    }
}

void dequeue(int queue[], int *front, int *rear, int size) {
    if(*front == -1){
        printf("Queue Underflow\n");
    }
    else if(*front == size){
        printf("Element deleted from queue : %d\n", queue[(*front)]);
        (*front) = -1;
        (*rear) = -1;
    }
    else{
        printf("Element deleted from queue : %d\n", queue[(*front)]);
        (*front)++;
    }
}

void peek(int queue[], int front, int size) {
    if(front != -1) {
        printf("Queue Underflow\n");
    }
    else if(front ){
        printf("Element at front : %d\n", queue[front]);
    }
}

void isEmtpy(int front, int size) {
    if(front != -1 && front <= size){
        printf("False : Queue not empty\n");
    }
    else{
        printf("True : Queue is empty\n");
    }
}

void isFull(int rear, int size){
    if(rear == size-1){
        printf("True : Queue is Full\n");
    }
    else{
        printf("False : Queue is not Full\n");
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
        printf("Queue is empty");
    }
}