#include <stdio.h>

void main(){
    FILE *fp = fopen("sample.txt", "w");
    char str[100];
    printf("Enter the string : ");
    gets(str);
    fputs(str, fp);
    fclose(fp);

    fp = fopen("sample.txt", "r");
    printf("%s", fgets(str,sizeof(str), fp));
    fclose(fp);
}