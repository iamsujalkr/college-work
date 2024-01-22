#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    printf("Enter the String : ");
    fgets(str,100,stdin);

    char small[100];
    char large[100];
    int min = 0, max = 0;
    char temp[100];
    int j = 0;
    int len;
    for(int i = 0; i <= strlen(str); i++){
        if(str[i] != ' ' && str[i] != '\0'){
            temp[j] = str[i];
            j++;
        }
        else {
            temp[j] = '\0';
            len = strlen(temp);
            if(min == 0 && max == 0){
                min = len;
                max = len;
                strcpy(small,temp);
                strcpy(large,temp);
            }
            else{
                if(min > len){
                    min = len;
                    strcpy(small,temp);
                }
                if(max < len){
                    max = len;
                    strcpy(large,temp);
                }
            }
            strcpy(temp,"");
            j = 0;
        }
    }
    printf("Smallest word : %s\n", small);
    printf("Largest word : %s", large);
}