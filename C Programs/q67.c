#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if(argc == 1){
        printf("No Command line arguments was passed");
        exit(1);
    }else if (argc < 3)
    {
        printf("Reqiured No of Command line arguments is missing");
        exit(1);
    }else if (argc > 3)
    {
        printf("More than required No of Command line arguments was given");
        exit(1);
    }

    FILE *fp1 = fopen(argv[1], "r");
    FILE *fp2 = fopen(argv[2], "r");

    if(fp1 == NULL || fp2 == NULL){
        printf("Files could not be opened");
        exit(1);
    }

    int flag = 1;
    char ch1,ch2;
    while((ch1=getc(fp1)) != EOF && (ch2=getc(fp2))){
        if(ch1 != ch2){
            flag = 0;
            break;
        }
    }

    if(flag){
        printf("Both Files are same");
    }else{
        printf("Both Files are not same");
    }

    fclose(fp1);
    fclose(fp2);
    return 0;
}