#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    if(argc == 1){
        printf("No Command line arguments was passed");
        exit(1);
    }else if (argc < 3)
    {
        printf("Reqiured No of Command line arguments is missing");
        exit(1);
    }else if (argc > 3)
    {
        printf("More than required No of Command line arguments was given");
        exit(1);
    }else{
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        printf("The Sum of two given numbers is %d", a+b);
    }
    
    return 0;
}