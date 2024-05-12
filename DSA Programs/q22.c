#include <stdio.h>
#include <stdlib.h>

void push(int stack[], int size, int *top);
void pop(int stack[], int *top);
void display(int stack[], int top);
void update(int stack[], int *top);

void main() {
    int size;
    printf("Enter the size of stack :  ");
    scanf("%d", &size);
    int stack[size];
    int top = -1;

    while(1) {
        printf("\nChoose from the following operations :-");
        printf("\n1 -- Push");
        printf("\n2 -- Pop");
        printf("\n3 -- Display Stack");
        printf("\n4 -- Update Stack");
        printf("\nEnter your operation  :  ");
        int user_opr;
        scanf("%d", &user_opr);

        switch (user_opr)
        {
        case 1:
            push(stack, size, &top);
            break;
        case 2:
            pop(stack, &top);
            break;
        case 3:
            display(stack, top);
            break;
        case 4:
            update(stack, &top);
            break;
        default:
            printf("Invalid operation");
            exit(1);
            break;
        }
    }
}

void push(int stack[], int size, int *top) {
    if(*top == size - 1) {
        printf("Stack Overflow\n");
    }
    else{
        *top += 1;
        printf("Enter the element to push :  ");
        scanf("%d", &stack[*top]);
        printf("Element added\n");
    }
}

void pop(int stack[], int *top) {
    if(*top == -1) {
        printf("Stack Underflow\n");
    }
    else {
        *top -= 1;
        printf("Element deleted\n");
    }
}

void display(int stack[], int top) {
    if(top != -1) {
        printf("Stack elements :- \n");
        for(int i = top; i >= 0; i--) {
            printf("Element %d -- %d\n", i+1, stack[i]);
        }
    }
    else{
        printf("Stack is empty\n");
    }
}

void update(int stack[], int *top) {
    if(*top != -1) {
        int position;
        printf("Enter the position to update :  ");
        scanf("%d", &position);
        if(*top >= position-1) {
            printf("Enter the updated value :  ");
            scanf("%d", &stack[position]);
            printf("Position updated\n");
        }
        else{
            printf("Position not in stack\n");
        }
    }
    else{
        printf("Stack is empty\n");
    }
}