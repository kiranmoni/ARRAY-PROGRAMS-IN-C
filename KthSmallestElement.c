#include<stdio.h>
#define size 100
void printArray(int [], int);
void readArray(int [], int);
void kthSmallest(int [], int);
int i, j, temp;
void main()
{
	int n, a[size], k;
	printf("Enter total number of elements you want to insert into the array : ");
	scanf("%d",&n);
	printf("Enter elements you want to insert into the array : ");
	readArray(a, n);
	printf("The elements in array are : \n");
	printArray(a,n);
	printf("\nEnter Kth smallest element you want to find : ");
	scanf("%d",&k);
	kthSmallest(a,n);
	printf("\nThe Kth = %d smallest element is %d ",k, a[k-1]);
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
void kthSmallest(int a[], int n)
{
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
