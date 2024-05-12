#include <stdio.h>
#include <stdlib.h>

void enqueue(int queue[], int *rear, int *front, int size);
void dequeue(int queue[], int *front, int *rear, int size);
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
        printf("\n1 -- Insertion");
        printf("\n2 -- Deletion");
        printf("\n3 -- Peek");
        printf("\n4 -- Display queue");
        printf("\n5 -- Exit");
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
        default:
            if(user_opr != 5){
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
    if(*front == -1) {
        (*front)++;
        (*rear)++;
        queue[(*rear)] = element;
        printf("Element inserted\n");
    }
    else if(*rear == size - 1){
        if(*front == 0){
            printf("Queue Overflow");
        }
        else{
            (*rear) = 0;
            queue[(*rear)] = element;
            printf("Element inserted\n");
        }
    }
    else{
        if(*rear == *front - 1){
            printf("Queue Overflow");
        }
        else{
            (*rear)++;
            queue[(*rear)] = element;
            printf("Element inserted\n");
        }
    } 
}

void dequeue(int queue[], int *front, int *rear, int size) {
    if(*front == -1){
        printf("Queue Underflow\n");
    }
    else if(*front == *rear){
        printf("Element deleted from queue : %d\n", queue[(*front)]);
        (*front) = -1;
        (*rear) = -1;
    }
    else if(*front == size-1){
        printf("Element deleted from queue : %d\n", queue[(*front)]);
        (*front) = 0;
    }
    else {
        printf("Element deleted from queue : %d\n", queue[(*front)]);
        (*front)++;
    }
}

void peek(int queue[], int front, int size) {
    if(front == -1) {
        printf("Queue Underflow\n");
    }
    else{
        printf("Element at front : %d\n", queue[front]);
    }
}

void display(int queue[], int front, int rear, int size) {
    if(front != -1) {
        if(front < rear){
            printf("Elements in Queue :-\n");
            for(int i = front; i <= rear; i++) {
                printf("%d   ", queue[i]);
            }
        }
        else{
            printf("Elements in Queue :-\n");
            for(int i = front; i < size; i++) {
                printf("%d   ", queue[i]);
            }
            for(int i = 0; i<= rear; i++){
                printf("%d   ", queue[i]);
            }
        }
    }
    else{
        printf("Queue is empty");
    }
}