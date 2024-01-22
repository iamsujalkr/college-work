#include <stdio.h>

struct Student{
    int roll;
    char name[100];
}s1,s2,s3,s4;

void main(){
    FILE *fp = fopen("sample.bin", "wb+");

    printf("Entering Data into File :-\n");
    printf("Enter Roll No of 1 Student : ");
    scanf("%d", &s1.roll);
    printf("Enter name of 1 Student : ");
    fflush(stdin);
    gets(s1.name);
    fwrite(&s1, sizeof(s1), 1, fp);

    int cursor = ftell(fp);
    printf("File cursor is at %d character\n", cursor);
    fseek(fp, cursor, SEEK_SET);

    printf("Enter Roll No of 2 Student : ");
    scanf("%d", &s2.roll);
    printf("Enter name of 2 Student : ");
    fflush(stdin);
    gets(s2.name);
    fwrite(&s2, sizeof(s2), 1, fp);

    rewind(fp);

    printf("\nReading Data from file :-\n");
    fread(&s3, sizeof(s3), 1, fp);
    fread(&s4, sizeof(s4), 1, fp);
    printf("Roll no of 1 Student : %d\n", s3.roll);
    printf("Name of 1 Student : %s\n", s3.name);
    printf("Roll no of 2 Student : %d\n", s4.roll);
    printf("Name of 2 Student : %s\n", s4.name);
    cursor = ftell(fp);
    printf("File cursor is at %d character\n", cursor);
    fclose(fp);
}