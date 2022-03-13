#include<stdio.h>
#define size 100
void printArray(int [], int);
void readArray(int [], int);
void reverseArray(int [], int);
int i, temp;
void main()
{
	int a[size],n;
	printf("Enter total number of elements you want to insert into an array : ");
	scanf("%d",&n);
	printf("Enter elements into the array : \n");
	readArray(a,n);
	printf("The elements in the array are : \n");
	printArray(a,n);
	reverseArray(a,n);
	printf("\nThe elements in the array after reverse order : \n");
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
void reverseArray(int a[], int n)
{
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
}

