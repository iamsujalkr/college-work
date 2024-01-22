#include <stdio.h>

void main() { 
    char str[100];
    printf("Enter the string : ");
    gets(str);

    int count = 0; 
    for(int i = 0; str[i] != '\0'; i++) {  
        if(str[i] != ' ')  
            count++;  
    }  
      
    printf("Total number of characters in a string: %d", count);  

}  