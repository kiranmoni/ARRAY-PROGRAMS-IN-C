#include<stdio.h>
#define size 100
void printArray(int [], int);
void readArray(int [], int);
void removeDuplicates(int [], int *);
int i, j, k;
void main()
{
	int n, a[size];
	printf("Enter total number of elements you want to insert into the array : ");
	scanf("%d",&n);
	printf("Enter elements you want to insert into the array : ");
	readArray(a, n);
	printf("The elements in array are : \n");
	printArray(a,n);
	removeDuplicates(a,&n);
	printf("\nElements after removing duplicates in the array are: \n");
	printArray(a,n);
}
void readArray(int a[], int n)
{
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void printArray(int a[], int n)
{
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void removeDuplicates(int a[], int *n)
{
	for(i=0;i<*n;i++)
	{
		for(j=i+1;j<*n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<(*n)-1;k++)
				{
					a[k]=a[k+1];
				}
				(*n)--;
				j--;
			}
		}
	}
}
