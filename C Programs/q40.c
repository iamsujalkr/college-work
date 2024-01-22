#include <stdio.h>

void main(){
    FILE *fp = fopen("sample.txt", "w");
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);
    fputc(ch, fp);
    fclose(fp);

    fp = fopen("sample.txt", "r");
    printf("%c", fgetc(fp));
}