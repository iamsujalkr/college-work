#include <stdio.h>

int main() {
    char ch;
    printf("Enter the Character : ");
    scanf("%c", &ch);

    if(ch >= 'A' && ch <= 'Z') {
        printf("The Entered Character is a Upper Case Alphabet");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("The Entered Character is a Lower Case Alphabet");
    } else if (ch >= '0' && ch <= '9') {
        printf("The Entered Character is a Digit");
    } else {
        printf("The Entered Character is a Special Character");
    }
    
    return 0;
    
}
