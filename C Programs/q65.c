#include<stdio.h>
#include<conio.h>
void sum()
{
	int arr1[50][50],brr1[50][50],crr1[50][50],i,j,n;
	printf("Input the size of a square matrix");
	scanf("%d",&n);
	printf("Input the elements in first matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("element-%d%d ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter the element of the second matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("element-%d%d ",i,j);
			scanf("%d",&brr1[i][j]);
		}
		
	}
	printf("The first matrix is:\n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		printf("%d\t",arr1[i][j]);
	}
	printf("The second matrix is:\n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		printf("%d\t",brr1[i][j]);
	}
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	crr1[i][j]=arr1[i][j]+brr1[i][j];
	printf("The added matrix is: \n");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		printf("%d\t",crr1[i][j]);
	}
	printf("\n\n");
}
void product()
{
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
void transpose()
{
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
   return 0;
}	
void main()
{
	int c;
	printf("1-Sumof two matrices 2-Product of two matrices 3-transpose\n");
	printf("Enter your choice:\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			sum();
			break;
		case 2:
			product();
			break;
		case 3:
			transpose();
			break;
		default:
			printf("Invalid Choice");
	}
}