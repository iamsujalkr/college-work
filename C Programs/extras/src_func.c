#include <stdio.h>

int square(int side);
int rectangle(int lenght, int breadth);
float circle(float radius);

void main()
{
    int side;
    printf("\nEnter the side of Square :  ");
    scanf("%d", &side);
    printf("\n%d", square(side));

    int l,b;
    printf("\n\nEnter the length and breadth of rectangle :  ");
    scanf("%d %d", &l,&b);
    printf("\n%d", rectangle(l,b));

    float radius;
    printf("\n\nEnter the radius of Circle :  ");
    scanf("%f", &radius);
    printf("\n%f", circle(radius));
}


int square(int side) {
    return side*side;
}

int rectangle(int lenght, int breadth) {
    return 2*(lenght+breadth);
}

float circle(float radius) {
    return 3.14*(radius*radius);
}