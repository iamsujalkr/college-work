#include <stdio.h>

void vowel(char str[]);
void chvo(char str[]);


void main() {
    char str[] = "My name is Sujal KUmar";
    vowel(str);
    chvo(str);
    printf("%s", str);

}

void vowel(char str[]) {
    int a = 0;
    int e = 0;
    int i = 0;
    int o = 0;
    int u = 0;
    int j = 0;
    while(str[j]) {
        if(str[j] == 'a' || str[j] == 'A') {
            a++;
        }
        if(str[j] == 'e' || str[j] == 'E') {
            e++;
        }
        if(str[j] == 'i' || str[j] == 'I') {
            i++;
        } 
        if(str[j] == 'o' || str[j] == 'O') {
            o++;
        }
        if(str[j] == 'u' || str[j] == 'U') {
            u++;
        }
        j++;
    }
    printf("No. of vowels found in the given string :-");
    printf("\na -- %d",a);
    printf("\ne -- %d",e);
    printf("\ni -- %d",i);
    printf("\no -- %d",o);
    printf("\nu -- %d",u);
}

void chvo(char str[]) {
    int j = 0;
    while(str[j]) {
        if(str[j] == 'a') {
            str[j] = 'A';
        }
        if(str[j] == 'e') {
            str[j] = 'E';
        }
        if(str[j] == 'i') {
            str[j] = 'I';
        } 
        if(str[j] == 'o') {
            str[j] = 'O';
        }
        if(str[j] == 'u') {
            str[j] = 'U';
        }
        j++;
    }
    puts(str);
}