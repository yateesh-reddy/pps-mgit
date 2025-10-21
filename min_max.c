#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    // Basically this below stuff is a simplified version of nested if-else
    // This is called terenary operator which works as follows:
    // (check) ? case_true : case_false
    int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Min = %d, Max = %d", min, max);
}