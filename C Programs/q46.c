#include <stdio.h>

void main(){
    FILE *fp = fopen("sample.txt","r");
    char ch;
    printf("Reading from file :-\n");
    while((ch = getc(fp)) != '\n'){
        printf("%c", ch);
    }
    printf("\nNow File Cursor is at %d\n", ftell(fp));
    while((ch = getc(fp)) != EOF){
        printf("%c", ch);
    }
    printf("\nNow File Cursor is at %d\n", ftell(fp));
    printf("After using rewind function\n");
    rewind(fp);
    printf("Now File Cursor is at %d", ftell(fp));
    fclose(fp);
}