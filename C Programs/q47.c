#include <stdio.h>

void main(){
    char fname[50];
    printf("Enter the File name : ");
    gets(fname);
    FILE *fp1 = fopen(fname,"w");
    printf("Data in file - %s :-\n", fname);
    for(int i = 1;i <= 10; i++){
        printf("%d ",i);
        putw(i, fp1);
    }
    fclose(fp1);

    fp1 = fopen(fname, "r");
    FILE *fp2 = fopen("even.txt", "w");
    FILE *fp3 = fopen("odd.txt", "w");

    int num;
    while((num = getw(fp1)) != EOF){
        if(num % 2 == 0){
            putw(num, fp2);
        }else{
            putw(num, fp3);
        }
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    fp2 = fopen("even.txt", "r");
    fp3 = fopen("odd.txt", "r");

    printf("\n\nData in file - even.txt :-\n");
    while((num = getw(fp2)) != EOF){
        printf("%d ", num);
    }
    printf("\n\nData in file - odd.txt :-\n");
    while((num = getw(fp3)) != EOF){
        printf("%d ", num);
    }
    
    fclose(fp2);
    fclose(fp3);
}