//Program to reverse the elements of an array
#include <stdio.h>

int main() {
    //taking size of array from user
    int n;
    printf("Enter the size of array :  ");
    scanf("%d", &n);

    //declaring an array of size n
    int num_arr[n];
    
    //taking elements from user
    for(int i = 0; i < n; i++) {
        printf("Enter the element - %d :   ",i);
        scanf("%d", &num_arr[i]);
    }

    //printing original array
    printf("Your orginal array is :-\n");
    for(int i = 0; i < n; i++){
        printf("%d\t", num_arr[i]);
    }

    //reversing the array  
    for(int i=0,j=n-1;i < n /2 && j >= n /2 ;i++,j--) {
        int temp;
        temp = num_arr[i];
        num_arr[i] = num_arr[j];
        num_arr[j] = temp;
    }

    //printing the recerse array
    printf("\nYour reversed array is :-\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t", num_arr[i]);
    }
    return 0;
}