#include <stdio.h>

void binary(int arr[], int n, int num);
void bubble(int arr[], int n);

void main() {
    int n;
    printf("Enter the Number of elements to store : ");
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        printf("Enter the %d Element : ", i+1);
        scanf("%d", &arr[i]);
    }

    int num;
    printf("\nEnter the element to search : ");
    scanf("%d", &num);
    binary(arr, n, num);
    printf("\nArray is ascending order is :-\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
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
        printf("Element %d is found at the %d index or place", num, mid+1);
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