#include <stdio.h>

int main() {
    float cels;
    printf("Enter the celcius temperature : ");
    scanf("%f", &cels);

    float farhn = cels * (9.0/5) + 32;

    printf("The Fahrenheit temperature is %f F", farhn);
    
    return 0;

}