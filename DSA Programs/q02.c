#include <stdio.h>

char str1[50], str2[50], str3[100];

void strlength();
void strcat();
void strcmp();
void strcpy();

void main(){
    printf("Choose from the following operations :- ");
    printf("\n1 -- Get String lenght");
    printf("\n2 -- Concatenate two string");
    printf("\n3 -- Compare two string");
    printf("\n4 -- Copy a string");
    printf("\nEnter your operation :  ");
    int user_opr;
    scanf("%d", &user_opr);
    printf("\n");

    switch (user_opr)
    {
    case 1:
        fflush(stdin);
        printf("Enter the string :  ");
        gets(str1);
        strlength(str1);
        break;
    case 2:
        fflush(stdin);
        printf("Enter the string 1 :  ");
        gets(str1);
        fflush(stdin);
        printf("Enter the string 2 :  ");
        gets(str2);
        strcat();
        printf("Concatenated String :  %s", str3);
        break;
    case 3:
        fflush(stdin);
        printf("Enter the string 1 :  ");
        gets(str1);
        fflush(stdin);
        printf("Enter the string 2 :  ");
        gets(str2);
        strcmp();
        break;
    case 4:
        fflush(stdin);
        printf("Enter the string :  ");
        gets(str1);
        strcpy();
        printf("String 2 :  %s", str2);
        break;
    default:
        printf("You entered an invalid operation");
        break;
    }
}

void strlength(){
    int i = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    printf("Length of string : %d", i);
}

void strcat(){
    int j = 0;
    for(int i = 0; str1[i] != '\0'; i++){
        str3[j] = str1[i];
        j++;
    }
    for(int i = 0; str2[i] != '\0'; i++){
        str3[j] = str2[i];
        j++;
    }
    str3[j] = '\0';
}

void strcmp(){
    int i = 0,j = 0, flag = 1;
    while (str1[i] != '\0' || str2[j] != '\0')
    {
        if(str1[i] != str2[j]){
            flag = 0;
            break;
        }
        i++;
        j++;
    }
    if(flag){
        printf("Both strings are same");
    }
    else{
        printf("Both strings are different");
    }
}

void strcpy(){
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
}