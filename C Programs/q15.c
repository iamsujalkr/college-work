#include <stdio.h>

void main() {
    int arr[100];
    int n;
    printf("Enter the number of elements to store : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Enter the %d element : ", i+1);
        scanf("%d", &arr[i]);
    }

    //inserting element
    int pos,num;
    printf("\nEnter the index and element to insert : ");
    scanf("%d%d", &pos,&num);

    for(int i = n; i >= pos; i--) {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = num;
    n +=1;
    printf("Updated Array is :-\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

    //deleting element
    printf("\n\nEnter the element to delete : ");
    scanf("%d", &num);

    for(int i = 0; i < n; i++) {
        if(num == arr[i]) {
            pos = i;
        }
    }

    for(int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n -=1;
    printf("Updated Array is :-\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }

}