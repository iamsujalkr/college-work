// Program to calculate the area of circle
# include <stdio.h>

int main() {
    // Taking radius from user
    float radius;
    printf("Enter the radius of circle :  ");
    scanf("%f", &radius);

    // Printing the area of circle to user
    printf("%f", 3.14*(radius*radius));
    return 0;
}