#include <stdio.h>

void main() {
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'I':
    case 'i':
    case 'o':
    case 'O':
    case 'u':
    case 'U':  
        printf("The entered character is a vowel");
        break;
    default:
        printf("The entered character is not a vowel");
        break;
    }
}