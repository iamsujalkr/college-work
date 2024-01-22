#include <stdio.h>

void main(){
    FILE *fp = fopen("sample.txt", "w");
    char str[10];
    printf("Enter the text : ");
    scanf("%s", str);
    fprintf(fp,"%s", str);
    fclose(fp);

    fp = fopen("sample.txt", "r");
    char str1[10];
    fscanf(fp, "%s", str1);
    printf("%s", str1);
    fclose(fp);
}