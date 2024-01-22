#include <stdio.h>

void main(){
    char str[100];
    char reverse[100];
    printf("Enter the String - ");
    gets(str);

    int len = 0;
    int i = 0;
    while(str[i]){
        len++;
        i++;
    }
    int j;
    for(i = len - 1, j = 0; i >= 0; i--,j++){
		reverse[j] = str[i];
	}
	reverse[len] = '\0';

    int flag = 1;
    i = 0;
    while (str[i] != '\0' && reverse[i] != '\0')
    {
        if(str[i] != reverse[i]) {
            flag = 0;
            break;
        }
        i++;
    }
    
    if(flag){
        printf("The String is Palindrome");
    }else {
        printf("The String is not a Plaindrom");
    }
}