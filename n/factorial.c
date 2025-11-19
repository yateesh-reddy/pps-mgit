// C program to find factorial of a given number
#include <stdio.h>

int fact(int);

void main()
{
    int n, factorial;
    printf("Enter a number: \n");
    scanf("%d", &n);
    factorial = fact(n);
    printf("The Factorial of %d is %d\n", n, factorial);
}

int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}