#include <stdio.h>

void lower(int spr, int spc, int sparse[spr][spc]);
void upper(int spr, int spc, int sparse[spr][spc]);
void diagonal(int spr, int spc, int sparse[spr][spc]);

void main(){
    int spr, spc;
    printf("Enter the dimension of sparse matrix :  ");
    scanf("%d %d", &spr, &spc);
    int sparse[spr][spc];

    printf("Enter the elements :-\n");
    for(int i = 0; i < spr; i++){
        for(int j = 0; j < spc; j++){
            printf("Element %d%d :  ",i,j);
            scanf("%d", &sparse[i][j]);
        }
    }

    printf("\nChoose from the following operations :-");
    printf("\n1 -- Lower Triangular matrix");
    printf("\n2 -- Upper Triangular matrix");
    printf("\n3 -- Diagonal matrix");
    printf("\nEnter your operation :  ");
    int user_opr;
    scanf("%d", &user_opr);

    switch (user_opr)
    {
    case 1:
        lower(spr,spc, sparse);
        break;
    case 2:
        upper(spr,spc, sparse);
        break;
    case 3:
        diagonal(spr,spc, sparse);
        break;
    default:
        printf("Invalid operation");
        break;
    }
}

void lower(int spr, int spc, int sparse[spr][spc]){
    printf("Lower Triangular Matrix :-\n");
    for(int i = 0; i < spr; i++){
        for(int j = 0; j < spc; j++){
            if(i < j){
                printf("0   ");
            }
            else{
                printf("%d   ", sparse[i][j]);
            }
        }
        printf("\n");
    }
}

void upper(int spr, int spc, int sparse[spr][spc]){
    printf("Upper Triangular Matrix :-\n");
    for(int i = 0; i < spr; i++){
        for(int j = 0; j < spc; j++){
            if(i > j){
                printf("0   ");
            }
            else{
                printf("%d   ", sparse[i][j]);
            }
        }
        printf("\n");
    }
}

void diagonal(int spr, int spc, int sparse[spr][spc]){
    printf("Diagonal Matrix :-\n");
    for(int i = 0; i < spr; i++){
        for(int j = 0; j < spc; j++){
            if(i == j){
                printf("%d   ", sparse[i][j]);
            }
            else{
                printf("0   ");
            }
        }
        printf("\n");
    }
}