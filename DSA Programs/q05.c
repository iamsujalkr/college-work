#include <stdio.h>

void triplet(int spr, int spc, int nzero, int sparse[spr][spc], int tuple[][3]);

void main() {
    int spr, spc;
    printf("Enter the dimension of sparse matrix :  ");
    scanf("%d %d", &spr, &spc);
    int sparse[spr][spc];

    int nzero = 0;
    printf("Enter the elements :-\n");
    for(int i = 0; i < spr; i++){
        for(int j = 0; j < spc; j++){
            printf("Element %d%d :  ",i,j);
            scanf("%d", &sparse[i][j]);
            if(sparse[i][j] != 0){
                nzero++;
            }
        }
    }

    int sp_total = spr*spc;
    if(sp_total - nzero >= (sp_total/2)){
        printf("\nThe matrix is a sparse matrix as there are %d zero elements", sp_total - nzero);
        int tpr = nzero+1, tpc = 3;
        int tuple[tpr][tpc];
        triplet(spr, spc, nzero, sparse, tuple);
        printf("\nThe tuple form of matrix is :-\n");
        for(int i = 0; i < tpr; i++){
            for(int j = 0; j < 3; j++){
                printf("%d   ", tuple[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("\nThe matrix is not a sparse matrix as there are only %d zero elements", sp_total - nzero);
        printf("\nTherefore its unneccesarry to store it in tuple form");
    }
}

void triplet(int spr, int spc, int nzero, int sparse[spr][spc], int tuple[][3]) {
    tuple[0][0] = spr;
    tuple[0][1] = spc;
    tuple[0][2] = nzero;
    int tpr = 1;
    for(int i = 0; i < spr; i++){
        for(int j = 0; j < spc; j++){
            if(sparse[i][j] != 0){
                tuple[tpr][0] = i;
                tuple[tpr][1] = j;
                tuple[tpr][2] = sparse[i][j];
                tpr++;
            }
        }
    }
}
