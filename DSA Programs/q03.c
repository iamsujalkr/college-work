#include <stdio.h>
#include <stdlib.h>

int arr[100];
int used_size = 0;

void input_array();
void bubble();
void insertion();
void selection();
void display_array();

void main(){
    printf("Choose from the following operations :-");
    printf("\n1 -- Bubble sort");
    printf("\n2 -- Selection sort");
    printf("\n3 -- Insertion sort");
    printf("\n4 -- Merge sort");
    printf("\n5 -- Merging two sorted array");
    printf("\nEnter your operation : ");
    int user_opr;
    scanf("%d", &user_opr);
    printf("\n");

    switch (user_opr)
    {
    case 1:
        input_array();
        bubble();
        printf("\nArray after Bubble sort :-\n");
        display_array();
        break;
    case 2:
        input_array();
        selection();
        printf("\nArray after Selection sort :-\n");
        display_array();
        break;
    case 3:
        input_array();
        insertion();
        printf("\nArray after Insertion sort :-\n");
        display_array();
        break;
    case 4:
        break;
    case 5:
        break;
    default:
        printf("You entered an invalid operation");
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

void bubble(){
    int temp;
    for(int i = 0; i < used_size - 1; i++){
        for(int j = 0; j < used_size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void insertion(){
    for(int i = 1 ; i < used_size; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void selection(){
    for(int i = 0; i < used_size - 1; i++){
        int min = i;
        int flag = 0;
        for(int j = i+1; j < used_size; j++){
            if(arr[min] > arr[j]){
                min = j;
                flag = 1;
            }
        }
        if(flag){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

void display_array(){
    /* Displays all the elements of the array */

    if(used_size >= 1){
        for(int i = 0; i < used_size; i++){
            printf("Element %d :  %d\n", i+1, arr[i]);
        }
    }
    else{
        printf("The Array is empty!");
    }
}