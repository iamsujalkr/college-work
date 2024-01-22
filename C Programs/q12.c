//Program to do linear search,binary search,bubble sort,selection sort using funtions
#include <stdio.h>

void linear(int arr[], int n, int num);
void binary(int arr[], int n, int num);
void bubble(int arr[], int n);
void selection(int arr[], int n);

void main() {
    int n;
    printf("Enter the Number of elements to store : ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the %d Element : ", i+1);
        scanf("%d", &arr[i]);
    }

    int opr;
    printf("\nChoose any of the operation :-");
    printf("\n1 - Linear Search");
    printf("\n2 - Binary Search");
    printf("\n3 - Bubble Sort");
    printf("\n4 - Selection Sort");
    printf("\nEnter the operation to perform : ");
    scanf("%d", &opr);

    int num,position;
    switch (opr)
    {
    case 1:
        printf("\nEnter the element to search : ");
        scanf("%d", &num);
        linear(arr, n, num);
        break;
    case 2:
        printf("\nEnter the element to search : ");
        scanf("%d", &num);
        binary(arr, n, num);
        break;
    case 3:
        bubble(arr, n);
        printf("\nThe array is sorted by Bubble Sort");
        printf("\nSorted Array :-\n");
        for(int i = 0; i < n; i++) {
            printf("%d\t", arr[i]);
        }
        break;
    case 4:
        selection(arr, n);
        printf("\nhe array is sorted by Selection Sort");
        printf("\nSorted Array :-\n");
        for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
        }
        break;
    default:
        printf("You have entered a wrong character");
        break;
    }

}

void linear(int arr[], int n, int num) {
    int i, flag = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            flag = 1;
            break;
        }
    }
    if(flag) {
        printf("Linear Search Completed");
        printf("\nElement %d is found at the %d index or place", num, i+1);
    } else {
        printf("Element not present in array");
    }
}

void binary(int arr[], int n, int num) {
    bubble(arr, n);
    int start, mid , end,flag = 0;
    start = 0;  end = n - 1;
    while(start <= end) {
        mid = (start + end) / 2;
        if(num == arr[mid]) {
            flag = 1;
            break;
        } else if (num > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    if(flag) {
        printf("Binary Search Completed");
        printf("\nElement %d is found at the %d index or place", num, mid+1);
    } else {
        printf("Element not present in array");
    } 
}

void bubble(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n-i-1; j++) {
            int temp;
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void selection(int arr[], int n) {
    int flag = 0;
    for(int i = 0; i < n; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            int temp;
            if(arr[j] < arr[min]) {
                min = j;
                flag = 1;
            }
            if(flag) {
                temp = arr[min];
                arr[min] = arr[i];
                arr[i] = temp;
            }
        }
    }
}