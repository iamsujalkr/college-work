//Program to perform Insertion, Deletion, Traversing and Reverse operations on an Array
#include <stdio.h>

//declaring an Array to perform operations
int arr[100];
int used_size = 0;

// Declaring funtions to perform operations
int input_array();
void sorted_insertion();

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

    //performing the valid operation user wants to perform
    switch (user_opr)
    {
    case 1:
        input_array();

        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    default:
        printf("Oops! You entered an invalid operation");
        break;
    }
}

int input_array(){
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
        return 1;
    }
    return 0;
}