#include <stdio.h>

void insertionSort(int arr[], int n);

int main()
{
	int i, n, arr[20];
	printf("enter the size of the array");
	scanf("%d", &n);
	printf("enter Array elements");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	insertionSort(arr, n);
	printf("Sorted array is: ");
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}

void insertionSort(int arr[], int n)
{
	int i, j, temp;
	for (i = 1; i < n; i++)
	{
		temp = arr[i];
		j = i - 1;
		while ((j >= 0) && (temp < arr[j]))
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = temp;
	}
}