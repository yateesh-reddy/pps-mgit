// Write a C program that sorts the given array of integers using selection sort in ascending order.

#include <stdio.h>

void selectionsort(int a[], int n);

int main()
{
	int a[20], i, n;
	printf("Enter the size of array:");
	scanf("%d", &n);
	printf("Enter the array elements:");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	selectionsort(a, n);
	printf("after sorting\n");
	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
	return 0;
}

void selectionsort(int a[], int n)
{
	int i, j, temp;
	/*	int min,i,j,t;
		for(i=0;i<n;i++)
		{
		min=i;
		  for(j=i+1;j<n;j++)
		  {
			if(a[j]<a[min])
			{
			min=j;
			}
		  }
		t=a[i];
		a[i]=a[min];
		a[min]=t;
		} */
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}