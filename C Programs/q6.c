#include <stdio.h>
#define PI 3.14

int diam(int radius);
float circum(int radius);
float area(int radius);

void main() {
    int radius;
    printf("Enter the radius of cirlce : ");
    scanf("%d", &radius);

    printf("The diameter of circle is %d\n", diam(radius));
    printf("The circumference of circle is %f\n", circum(radius));
    printf("The area of circle is %f\n", area(radius));

}

int diam(int radius) {
    int diameter;
    diameter = 2 * radius;
    return diameter;
}

float circum(int radius) {
    float circumference;
    circumference = 2 * PI * radius;
    return circumference;
}

float area(int radius) {
    float cir_area;
    cir_area = PI * (radius * radius);
    return cir_area;
}