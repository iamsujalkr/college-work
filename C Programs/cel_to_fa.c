#include <stdio.h>

float celsius(float farhn);
float farhnaite(float cels);

void main()
{
    float farhn = 98;
    float cels  = celsius(farhn);
    printf("%f\n", cels);
    printf("%f\n", farhnaite(cels));
}

float celsius(float farhn) {
    float cels = (farhn - 32) * 5.0/9;
    return cels;
}

float farhnaite(float cels) {
    float farhn = cels * (9.0/5) + 32;
    return farhn;
}