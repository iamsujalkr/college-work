#include <stdio.h>

void triplet(int spr, int spc, int nzero, int sparse[spr][spc], int tuple[][3]);
void add(int tuple1[][3], int tuple2[][3], int result[][3], int tp1r, int tp2r);
void dimension(int *spr, int *spc, int num);
void sparse_input(int spr, int spc, int sparse[spr][spc], int *nzero);

void main() {
    printf("Choose from the following operations :-");
    printf("\n1 -- Transpose of sparse matrix");
    printf("\n2 -- Add two sparse matrices");
    printf("\n3 -- Multiply two sparse matrices");
    printf("\nEnter your operation :  ");
    int user_opr;
    scanf("%d", &user_opr);

    int spr1, spc1, nzero1 = 0, spr2, spc2, nzero2 = 0;
    switch (user_opr)
    {
    case 1:
        break;
    case 2:
        dimension(&spr1, &spc1, 1);
        int sparse1[spr1][spc1];
        sparse_input(spr1, spc1, sparse1, &nzero1);
        break;
    case 3:
        break;
    default:
        break;
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

void dimension(int *spr, int *spc, int num) {
    printf("Enter the dimensions of %d sparse matrix  :  ", num);
    scanf("%d%d", &spr, &spc);
}

void sparse_input(int spr, int spc, int sparse[spr][spc], int *nzero) {
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
}

void add(int tuple1[][3], int tuple2[][3], int result[][3], int tp1r, int tp2r) {
    int i = 1,j = 1, k = 1;
    while(i < tp1r && j < tp2r){
        if(tuple1[i][0] > tuple2[j][0]) {
            result[k][0] = tuple1[i][0];
            result[k][1] = tuple1[i][1];
            result[k][2] = tuple1[i][2];
            i++, k++;
        }
        else if(tuple1[i][0] < tuple2[j][0]) {
            result[k][0] = tuple2[j][0];
            result[k][1] = tuple2[j][1];
            result[k][2] = tuple2[j][2];
            j++, k++;
        }
        else{
            if(tuple1[i][1] > tuple2[j][1]){
                result[k][0] = tuple1[i][0];
                result[k][1] = tuple1[i][1];
                result[k][2] = tuple1[i][2];
                i++, k++;
            }
            else if(tuple1[i][1] < tuple2[j][1]) {
                result[k][0] = tuple2[j][0];
                result[k][1] = tuple2[j][1];
                result[k][2] = tuple2[j][2];
                j++, k++;
            }
            else{
                result[k][0] = tuple2[j][0];
                result[k][1] = tuple2[j][1];
                result[k][2] = tuple1[i][2] + tuple2[j][2];
                i++, j++, k++;
            }
        }
    }
    while(i < tp1r){
        result[k][0] = tuple1[i][0];
        result[k][1] = tuple1[i][1];
        result[k][2] = tuple1[i][2];
        i++, k++;
    }
    while(j < tp2r) {
        result[k][0] = tuple2[j][0];
        result[k][1] = tuple2[j][1];
        result[k][2] = tuple2[j][2];
        j++, k++;
    }
    result[0][0] = tuple1[0][0];
    result[0][1] = tuple1[0][1];
    result[0][2] = k-1;
}

