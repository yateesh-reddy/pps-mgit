// Fibonacci Series using Recursive function
#include <stdio.h>

int rfib(int);

void main()
{
    int n, x, i;
    printf("\n enter the no. of terms: ");
    scanf("%d", &n);
    printf("\n the fibonacci sequence is: ");
    for (i = 0; i <= n; i++)
    {
        x = rfib(i);
        printf("%5d", x);
    }
}

int rfib(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return rfib(n - 1) + rfib(n - 2);
}
