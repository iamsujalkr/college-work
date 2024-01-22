#include <stdio.h>

void reverse(char str1[], char str2[]);
int length(char str[]);
void concat(char str1[], char str2[], char str3[]);
void copy(char str1[], char str2[]);

void main(){
	int opr;
	printf("Choose any of the operation :-");
	printf("\n1 - Reverse a string");
	printf("\n2 - Concatenate two string");
	printf("\n3 - Length of a string");
	printf("\n4 - Copy a string");
	printf("\nEnter the operation - ");
	scanf("%d", &opr);
	printf("\n");

	char str1[100];
	char str2[100];
	char str3[100];
	switch(opr)
	{
	case 1:
		printf("Enter the String : ");
		fflush(stdin);
		gets(str1);
		reverse(str1,str2);
		printf("\nReversed String is :-\n");
		printf("%s", str2);
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
		printf("\nLength of String : %d", length(str1));
		break;
	case 4:
		printf("Enter the String - ");
		fflush(stdin);
		gets(str1);
		copy(str1,str2);
		printf("\nCopied string from one to another :-\n");
		printf("str2 - %s", str2);
		break;
	default:
		printf("You entered the wrong operation");
		break;
	}
}

void reverse(char str1[], char str2[]){
	int len = length(str1) - 1;
	for(int i = len, j = 0; i >= 0; i--,j++){
		str2[j] = str1[i];
	}
	str2[len+1] = '\0';
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

void copy(char str1[], char str2[]){
	int j = 0;
	for(int i = 0; str1[i] != '\0'; i++){
		str2[j] = str1[i];
		j++; 
	}
	str2[j] = '\0';
}