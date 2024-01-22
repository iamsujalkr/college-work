#include <stdio.h>

struct Student{
    int roll;
    char name[100];
}s1,s2;

void main(){
    FILE *fp = fopen("sample.bin", "wb+");

    printf("Entering Data into File :-\n");
    printf("Enter Roll NO : ");
    scanf("%d", &s1.roll);
    printf("Enter name : ");
    fflush(stdin);
    gets(s1.name);
    fwrite(&s1, sizeof(s1), 1, fp);
    rewind(fp);

    printf("\nReading Data from file :-\n");
    fread(&s2, sizeof(s2), 1, fp);
    printf("Roll no : %d\n", s2.roll);
    printf("Name : %s", s2.name);
    fclose(fp);
}