#include <stdio.h>

int main() {
    int arr[] = {1,4,2,4,4,4,5,25,2,6,7,8,9,5,0,0,4,6,8,22};

    int max;
    int min;
    max = arr[0];
    min = arr[0];
    for(int i = 1; i < 20; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }

        if(min > arr[i]) {
            min = arr[i];
        }
    }

    printf("Max element of an array is %d", max);
    printf("\nMin element of an array is %d", min);

    return 0;
}