#include <stdio.h>

void main(){
    FILE *fp1 = fopen("sample.txt", "r");
    FILE *fp2 = fopen("demo.txt", "r");
    FILE *fp3 = fopen("merge.txt", "w");

    char ch;
    printf("Data in 1 File :-\n");
    while((ch = getc(fp1)) != EOF){
        printf("%c", ch);
        putc(ch, fp3);
    }
    fclose(fp1);
    printf("\n");
    fputs("\n", fp3);

    printf("Data in 2 File :-\n");
    while((ch = getc(fp2)) != EOF){
        printf("%c", ch);
        putc(ch, fp3);
    }
    fclose(fp2);
    printf("\n");
    fputs("\n", fp3);

    printf("\nBoth File merged in one file :-\n");
    fclose(fp3);
}