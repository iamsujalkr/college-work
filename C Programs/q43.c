#include <stdio.h>

void main(){
    FILE *fp = fopen("sample.txt", "w");
    char str[] = "Hello I am reading from this file";
    printf("Actual String in File : %s", str);
    fputs(str, fp);
    fclose(fp);

    fp = fopen("sample.txt", "r");
    char str1[100];
    char str2[100];
    char str3[100];
    fseek(fp, 7, SEEK_SET);
    printf("\n\nFile Cursor is now set after 7 characters from start by using SEEK_SET\n");
    printf("%s", fgets(str1, 100, fp));\
    fseek(fp, 7, SEEK_SET);
    fseek(fp, 5, SEEK_CUR);
    printf("\nFile Cursor is now set after 5 characters from current position by using SEEK_CUR\n");
    printf("%s", fgets(str2, 100, fp));
    fseek(fp, 7, SEEK_SET);
    fseek(fp, 5, SEEK_CUR);
    fseek(fp, 0, SEEK_END);
    printf("\nFile Cursor is now set to end of the file by using SEEK_END\n");
    printf("%s", fgets(str3, 100, fp));
    fclose(fp);
}