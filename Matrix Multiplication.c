#include<stdio.h>
#define size 100
void printArray(int [][size], int, int);
void readArray(int [][size], int, int);
void mulitplication(int [][size],int [][size],int [][size],int,int);
int i,j,k1,k2;
void main()
{
	int row1,col1,row2,col2, a[size][size],b[size][size],c[size][size];
	printf("Enter Number of rows in A matrix : ");
	scanf("%d",&row1);
	printf("Enter Number of coloumns in A matrix : ");
	scanf("%d",&col1);
	printf("Enter elements you want to insert into A matrix : ");
	readArray(a, row1, col1);
	printf("Enter Number of rows in B matrix : ");
	scanf("%d",&row2);
	printf("Enter Number of columns in B matrix : ");
	scanf("%d",&col2);
	printf("Enter elements you want to insert into B matrix :");
	readArray(b, row2, col2);
	printf("The elements in A matrix are : \n");
	printArray(a,row1,col1);
	printf("The elements in B matrix are : \n");
	printArray(b,row2,col2);
	if(col1!=row2)
	{
		printf("Matrix multiplication not possible");
		exit(0);
	}
	printf("The Multiplication A X B matrix is :\n");
	multiplication(c,a,b,row1,col2);
	printArray(c,row1,col2);
}
void readArray(int x[][size], int rows, int cols)
{
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
}
void printArray(int x[][size], int rows, int cols)
{
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
}
void multiplication(int c[][size], int a[][size], int b[][size], int rows, int cols)
{
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			c[i][j]=0;
			for(k1=0,k2=0;k1<cols||k2<rows;k1++,k2++)
			{
				c[i][j]+=a[i][k1]*b[k2][j];
			}
		}
	}
}
