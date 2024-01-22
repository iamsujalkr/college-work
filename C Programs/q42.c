#include <stdio.h>

void main(){
    FILE *fp = fopen("sample.txt", "w");
    int num;
    for(int i = 0;i < 5;i++){
        printf("Enter NUM %d : ",i+1);
        scanf("%d", &num);
        putw(num, fp);
    }
    fclose(fp);

    fp = fopen("sample.txt", "r");
    for(int i = 0;i < 5;i++){
        printf("%d", getw(fp));
    }
    fclose(fp);
}