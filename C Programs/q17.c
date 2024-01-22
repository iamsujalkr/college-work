#include <stdio.h>

void matrix_sum();
void matrix_multi();
void matrix_tran();

void main() {
    int opr;
    printf("Choose any of the operation :-");
    printf("\n1 - Matrix Addition");
    printf("\n2 - Matrix Multiplication");
    printf("\n3 - Transpose of Matrix");
    printf("\nEnter your operation : ");
    scanf("%d", &opr);

    switch (opr)
    {
    case 1:
        matrix_sum();
        break;
    case 2:
        matrix_multi();
        break;
    case 3:
        matrix_tran();
        break;
    default:
        printf("You have entered wrong operation");
        break;
    }
}

void matrix_sum() {
    int num;
    printf("Enter the order of square matrix to add : ");
    scanf("%d", &num);
    int mat1[10][10];
    printf("Enter Matrix 1 :- \n");
    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num; j++) {
            printf("Enter Element %d%d : ", i,j);
            scanf("%d", &mat1[i][j]);
        }
    }
    int mat2[10][10];
    printf("\nEnter Matrix 2 :- \n");
    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num; j++) {
            printf("Enter Element %d%d : ", i,j);
            scanf("%d", &mat2[i][j]);
        }
    }
    printf("\nThe Resultant Matrix is :-\n");
    int result[10][10];
    for(int i = 0; i < num; i++) {
        for(int j = 0; j < num; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }
}

void matrix_multi() {
int a[10][10], b[10][10], c[10][10];
int m,n,i,j,l,k ;
printf("\n Enter Order of A matrix :");
scanf("%d %d", &m, &n);
printf("Enter A matrix \n");
for( i=0; i<m; i++)
for ( j=0; j<n; j++)
scanf("%d", &a[ i ][ j ]);
printf("\n Enter order of B matrix:");
scanf("%d %d", &n, &l);
printf("Enter B matrix \n");
for( i=0; i<n; i++)
for ( j=0; j<l; j++)
scanf("%d", &b[ i ][ j ]);
/* loop to multiply two matrices */
for( i=0; i<m; i++)
{
for ( j=0; j<l; j++)
{
c[i ][ j ] = 0;
for( k=0; k < n; k++)
c[i ][ j ] = c[ i ][ j ] +a[ i ][ k ] * b[ k ][ j ];
}
}
printf("\n product matrix is \n");
for( i=0; i<m; i++)
{
for( j=0; j<l; j++)
printf("%6d", c[ i ][ j ]);
printf("\n");
}
}

void matrix_tran() {
    int m, n, i, j, matrix[10][10], transpose[10][10];
   printf("Enter rows and columns :");

   scanf("%d%d", &m, &n);
   printf("Enter elements of the matrix");

   for (i= 0; i < m; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &matrix[i][j]);
   for (i = 0;i < m;i++)
      for (j = 0; j < n; j++)
      {
      	transpose[j][i] = matrix[i][j];
	  }
	  
         
   printf("Transpose of the matrix:\n");

   for (i = 0; i< n; i++) {
      for (j = 0; j < m; j++)
         printf("%d\t", transpose[i][j]);
         printf("\n");
   }
}