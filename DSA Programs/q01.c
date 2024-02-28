//Program to perform Insertion, Deletion, Traversing and Reverse operations on an Array
#include <stdio.h>
#include <stdlib.h>

//declaring an Array to perform operations
int arr[100];
int used_size = 0;

// Declaring funtions to perform operations
void input_array();
void array_insert(int add_pos, int element);
void display_array();
void array_delete(int element);
void reverse_array();


void main(){
    //displaying available operations to user and taking input
    printf("Choose the operation you want to perform :-");
    printf("\n1 -- Insertion in Sorted Array");
    printf("\n2 -- Insertion in Unsorted Array");
    printf("\n3 -- Deletion from Sorted Array");
    printf("\n4 -- Deletion from Unsorted Array");
    printf("\n5 -- Traverse an Array");
    printf("\n6 -- Reverse an Array");
    printf("\nEnter the operation :-  ");
    int user_opr;
    scanf("%d", &user_opr);
    printf("\n");

    int element;
    int add_pos;
    //performing the valid operation user wants to perform
    switch (user_opr)
    {
    case 1:
        input_array();
        add_pos = used_size;
        printf("Enter the element to insert :  ");
        scanf("%d", &element);
        for(int i = 0; i < used_size; i++){
            if(element < arr[i]){
                add_pos = i;
            }
        }
        array_insert(add_pos, element);
        printf("Updated Array :- ");
        display_array();
        break;
    case 2:
        input_array();
        printf("Enter the element to insert :  ");
        scanf("%d", &element);
        printf("Enter the index :  ");
        scanf("%d", &add_pos);
        array_insert(add_pos, element-1);
        printf("Updated Array :- ");
        display_array();
        break;
    case 3:
    case 4:
        input_array();
        printf("Enter the element to delete :  ");
        scanf("%d", &element);
        array_delete(element);
        printf("Updated Array :- ");
        display_array();
        break;
    case 5:
        input_array();
        printf("Traversing the Array :- ");
        display_array();
        break;
    case 6:
        input_array();
        reverse_array();
        printf("Updated Array :- ");
        display_array();
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

void array_insert(int add_pos, int element){
    /* Inserts the given element at the specified index*/

    // Shifing array elements 
    for(int i = used_size; i >= add_pos; i--){
        arr[i] = arr[i-1];
    }
    // Inserting element at the specified index and incrementing used_size of array
    arr[add_pos] = element;
    used_size++;
}

void display_array(){
    /* Displays all the elements of the array */

    if(used_size >= 1){
        for(int i = 0; i < used_size; i++){
            printf("\nElement %d :  %d", i+1, arr[i]);
        }
    }
    else{
        printf("The Array is empty!");
    }
}

void array_delete(int element){
    /* Deletes the given element from the array */

    // Searches for element in the array for its index
    int del_pos = -1;
    for(int i = 0; i < used_size; i++){
        if(arr[i] == element){
            del_pos = i;
        }
    }

    // If element not found exit from program
    if(del_pos == -1){
        printf("Cannot delete, Element not found in array");
        exit(1);
    }

    // If element found deletes the element
    for(int i = del_pos; i < used_size-1; i++){
        arr[i] = arr[i+1];
    }
    used_size--;
} 

void reverse_array(){
    /* Reverses the array elements */

    for(int i = 0, j = used_size-1; i < used_size/2; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}