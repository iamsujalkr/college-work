#include <stdio.h>
#include <string.h>

union Data{
    int i;
    float f;
    char str[20];
}dt;

void main(){
    dt.i = 17;
    printf("Valye of i = %d", dt.i);
    dt.f = 13.01;
    printf("\nValue of f = %.2f", dt.f);
    strcpy(dt.str, "Sujal Kumar");
    printf("\nValue of str = %s", dt.str);

    printf("\n\nMaximum size occupied by union member : %d", sizeof(dt));
}