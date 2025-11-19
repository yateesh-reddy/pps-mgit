#include <stdio.h>

int main()
{
	int a[20], n, i;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the array elements: ");
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	bubblesort(a, n);
	printf("after sorting elements are:");
	for (i = 0; i < n; i++)
		printf("%d\t", a[i]);
	return 0;
}

void bubblesort(int a[], int n)
{
	int temp, i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < (n - i - 1); j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}