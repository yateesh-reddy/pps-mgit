/* Write a C program that uses a non-recursive function to search for a key value in a
given list of integers using the linear search method */
#include <stdio.h>

int linearsearch(int a[], int n, int key)
{
	int i;
	for (i = 0; i < n; i++)
	{
		if (a[i] == key)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int a[100], n, key, pos, i;
	printf("enter the Size of the Array");
	scanf("%d", &n);
	printf("enter %d elements into array", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("enter key element to search");
	scanf("%d", &key);
	pos = linearsearch(a, n, key);
	if (pos >= 0)
		printf("element found at %d position", pos + 1);
	else
		printf("element not found");
	return 0;
}