#include <stdio.h>

int length(char str[]);
void concat(char str1[], char str2[], char str3[]);
void copy(char str1[], char str2[], int n);
void compare(char str1[], char str2[]);


void main(){
    int opr;
    printf("Choose any of the operation :-");
    printf("\n1 - Length of a string");
    printf("\n2 - Concatenate two string");
    printf("\n3 - Copy a string");
    printf("\n4 - Compare two string");
    printf("\n5 - Copy till Nth character");
    printf("\nEnter your operation :- ");
    scanf("%d", &opr);
    printf("\n");

    char str1[100];
    char str2[100];
    char str3[100];
    switch (opr)
    {
    case 1:
        printf("Enter the String - ");
		fflush(stdin);
		gets(str1);
		printf("\nLength of String : %d", length(str1));
        break;
    case 2:
        printf("Enter String 1 - ");
		fflush(stdin);
		gets(str1);
		printf("Enter String 2 - ");
		fflush(stdin);
		gets(str2);
		concat(str1,str2,str3);
		printf("\nConcatenated String :-\n");
		printf("%s", str3);
		break;
    case 3:
        printf("Enter the String - ");
		fflush(stdin);
		gets(str1);
		copy(str1,str2,length(str1));
		printf("\nCopied string from one to another :-\n");
		printf("str2 - %s", str2);
		break;
    case 4:
        printf("Enter String 1 - ");
        fflush(stdin);
        gets(str1);
        printf("Enter String 2 - ");
        fflush(stdin);
        gets(str2);
        compare(str1,str2);
        break;
    case 5:
        printf("Enter the String - ");
		fflush(stdin);
		gets(str1);
        int n;
        printf("Enter the Nth Charater to copy - ");
        scanf("%d", &n);
		copy(str1,str2,n);
		printf("\nCopied string from one to another till %d Character :-\n", n);
		printf("str2 - %s", str2);
		break;
    default:
        printf("You entered the wrong operation");
        break;
    }
}

int length(char str[]){
	int i = 0;
	while(str[i]){
		i++;
	}
	return i;
}

void concat(char str1[], char str2[], char str3[]){
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

void copy(char str1[], char str2[], int n){
	int j = 0;
	for(int i = 0; i < n; i++){
		str2[j] = str1[i];
		j++; 
	}
	str2[j] = '\0';
}

void compare(char str1[], char str2[]){
    int flag = 1;
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i]) {
            flag = 0;
            break;
        }
        i++;
    }
    if(flag){
        printf("Both Strings are same");
    }else {
        printf("Both Strings are not same");
    }   
}