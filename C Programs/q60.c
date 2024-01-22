#include <stdio.h>

void main(){
    FILE *fp1 = fopen("EvenFile.txt", "w");
    FILE *fp2 = fopen("OddFile.txt", "w");

    printf("Enter 20 Numbers :-\n");
    for(int i = 0; i < 20; i++){
        int num;
        printf("Enter Number %d : ", i+1);
        scanf("%d", &num);
        if(num % 2 == 0){
            putw(num, fp1);
        }else{
            putw(num, fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);

    fp1 = fopen("EvenFile.txt", "r");
    fp2 = fopen("OddFile.txt", "r");
    int num;
    printf("\nData in EvenFile.txt :-\n");
    while((num = getw(fp1)) != EOF){
        printf("%d ", num);
    }
    printf("\n\nData in OddFile.txt :-\n");
    while((num = getw(fp2)) != EOF){
        printf("%d ", num);
    }
    fclose(fp1);
    fclose(fp2);
}