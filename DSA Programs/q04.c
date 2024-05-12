#include <stdio.h>
#include <stdlib.h>

void input_array();
int search_element();
void linear();
void binary();

int arr[100];
int used_size = 0;

int main() {
    printf("Choose the operation you want to perform :-");
    printf("\n1 -- Linear search");
    printf("\n2 -- Binary search");
    printf("\nEnter the operation :-  ");
    int user_opr;
    scanf("%d", &user_opr);
    printf("\n");
    
    switch(user_opr){
        case 1:
            input_array();
            linear();
            break;
        case 2:
            input_array();
            binary();
            break;
        default:
            printf("Oops! You entered an invalid operation");
            break;
    }
}

void input_array(){
    /* Takes elements from user to insert in an empty array and sets the used_size */

    int n_elements;
    printf("Enter the No. of elements to store in an Array :  ");
    scanf("%d", &n_elements);
    // inputting elemets if nof of elements is more than or equal to 1
    if(n_elements >= 1){
        printf("Enter the Elements :-\n");
        // running loop till no of elements to store and less than the array total size of 100
        for(int i = 0; i < n_elements && i < 100; i++){
            printf("Element %d :  ", i+1);
            scanf("%d", &arr[i]);
            used_size++;
        }
    }
    else{
        printf("Error! in inputting array");
        exit(1);
    }
}

int search_element(){
    int user_input;
    printf("Enter the element to search : ");
    scanf("%d", &user_input);
    return user_input;
}

void linear(){
    printf("Searching through Linear search\n");
    int element = search_element();
    int flag = 0;
    int i;
    for(i = 0; i < used_size; i++){
        if(arr[i] == element){
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("Element found at %d index", i+1);
    }
    else{
        printf("Oops! element not found");
    }
}

void binary(){
    printf("Searching through Binary search\n");
    int element = search_element();
    int first = 0;
    int last = used_size - 1;
    int mid,flag = 0;
    while(first <= last){
        mid = (first + last) / 2;
        if(arr[mid] == element){
            flag = 1;
            break;
        }
        else if(arr[mid] > element){
            last = mid - 1;
        }
        else{
            first = mid + 1;
        }
    }
    if(flag){
        printf("Element found at %d index", mid+1);
    }
    else{
        printf("Oops! element not found");
    }
}