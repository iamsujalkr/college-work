#include <stdio.h>

struct Distance{
    int feet;
    float inch;
};

void main(){
    struct Distance d[3];
    for(int i = 0; i < 2; i++){
        printf("\nEnter %d Distance :-",i+1);
        printf("\nEnter Feet - ");
        scanf("%d", &d[i].feet);
        printf("Enter inch - ");
        scanf("%f", &d[i].inch);
    }

    d[2].feet = d[0].feet + d[1].feet;
    d[2].inch = d[0].inch + d[1].inch;

    while (d[2].inch >= 12.0)
    {
        d[2].inch-=12.0;
        d[2].feet+=1;
    }
    
    printf("\nSum of Distance = %d feet %1.f inch", d[2].feet,d[2].inch);
}