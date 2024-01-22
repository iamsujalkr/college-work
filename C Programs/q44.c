#include <stdio.h>

void main(){
    FILE *fp = fopen("sample.txt", "w");
    char str[100];
    printf("Enter the data : ");
    gets(str);
    fputs(str, fp);
    fputs("\n", fp);
    fclose(fp);

    fp = fopen("sample.txt", "r");
    char wrd = 0, chr = 0;
    char ch;
    while((ch = getc(fp)) != EOF){
        if(ch == ' ' || ch == '\n'){
            wrd++;
        }else{
            chr++;
        }
    }
    printf("No of Words = %d and No of characters = %d", wrd,chr);
    fclose(fp);
}