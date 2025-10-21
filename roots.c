#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        float root1 = (-b + sqrt(d)) / (2 * a);
        float root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    }
    else if (d == 0)
    {
        float root1 = -b / (2 * a);
        printf("Roots are real and equal: %.2f\n", root1);
    }
    else
    {
        float real = -b / (2 * a);
        float imag = sqrt(-d) / (2 * a);
        printf("Roots are complex: %.2f ± %.2fi\n", real, imag);
    }
    return 0;
}
