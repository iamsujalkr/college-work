#include <stdio.h>

void main() {
    char str[100];
    printf("Enter the String - ");
    fgets(str, 100, stdin);

    char *ptr = str;
    int vowel = 0;
    int cons = 0;
    while(*ptr != '\0'){
        if(*ptr != ' ') {
            if(*ptr == 'a' || *ptr == 'A' || *ptr == 'e' || *ptr == 'E' || *ptr == 'i' || *ptr == 'I' ||
                *ptr == 'o' || *ptr == 'O' || *ptr == 'u' || *ptr == 'U'){
                    vowel++;
                }else if((*ptr > 'A' && *ptr <= 'Z') || (*ptr > 'a' && *ptr <= 'z')){
                    cons++;
                }
            }
        ptr++;
    }

    printf("\nTotal vowels in String : %d\n", vowel);
    printf("Total consonants in String : %d", cons);
}