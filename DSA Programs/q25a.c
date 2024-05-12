#include <stdio.h>
#include <ctype.h>
#include <string.h>

char stack[100];
int top = -1;

void push(char e);
char pop();
int priority(char e);

void main() {
    char exp[100];
    printf("Enter the infinix ecpression :  ");
    scanf("%s", exp);

    printf("Prefix exp :  ");
    char *e = strrev(exp);
    char x;
    while(*e != '\0'){
        if(isalpha(*e)){
            printf("%c", *e);
        }
        else if(*e == ')'){
            push(*e);
        }
        else if(*e == '('){
            while ((x = pop()) != ')'){
                printf("%c", x);
            }
        }
        else{
            while(priority(stack[top]) > priority(*e)){
                printf("%c", pop());
            }
            push(*e);
        }
        e++;
    }
}

void push(char e){
    stack[++top] = e;
}

char pop(){
    return stack[top--];
}

int priority(char e){
    if(e == '+' || e == '-'){
        return 1;
    }
    else if(e == '*' || e == '/'){
        return 2;
    }
    else if(e == '^'){
        return 3;
    }
    return -1;
}