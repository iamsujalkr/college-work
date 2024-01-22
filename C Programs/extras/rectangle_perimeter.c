// Program to calculate perimeter of rectangle
# include <stdio.h>

int main() {
    // Taking length and breadth from user
    int length , breadth;
    printf("Enter the length of rectangle :  ");
    scanf("%d", &length);
    printf("Enter the  breadth of rectangle :  ");
    scanf("%d", &breadth);

    // Printing the perimeter of rectangle
    printf("The perimeter of rectangle is : %d units", 2*(length+breadth));
}