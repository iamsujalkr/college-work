#include <stdio.h>
#include <stdlib.h>

struct stack {
    int info;
    struct stack *next;
}*top = NULL;
int count = 0;
typedef struct stack Stack;

void push();
void pop();
void display();
void update();

void main() {
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
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            update();
            break;
        default:
            printf("Invalid operation");
            exit(1);
            break;
        }
    }
}

void push() {
    Stack *new = (Stack*)malloc(sizeof(Stack));
    printf("Enter the element :  ");
    scanf("%d", &new->info);
    new->next = top;
    top = new;
    count++;
    printf("Element added\n");
}

void pop() {
    if(top == NULL){
        printf("Stack Underflow");
    }
    else{
        Stack *ptr = top;
        top = top->next;
        free(ptr);
        count--;
        printf("Element deleted\n");
    }
}

void display() {
    if(top == NULL) {
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements :-\n");
        int i = count;
        Stack *ptr = top;
        while(ptr != NULL) {
            printf("Element %d -- %d\n", i, ptr->info);
            i--;
            ptr = ptr->next;
        }
    }
}

void update() {
    if(top != NULL) {
        int position;
        printf("Enter the position to update :  ");
        scanf("%d", &position);
        if(position <= count && position > 0) {
            Stack *ptr = top;
            while(position != count) {
                ptr = ptr->next;
                position++;
            }
            printf("Enter the updated value :  ");
            scanf("%d", &ptr->info);
            printf("Element updated\n");
        }
        else{
            printf("Position not in Stack\n");
        }
    }
    else{
        printf("Stack is empty\n");
    }
}