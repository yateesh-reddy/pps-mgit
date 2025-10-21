#include <stdio.h>
#include <math.h>

int main()
{
    float p, t, r, si, ci;
    printf("Enter principal, time and rate: ");
    scanf("%f %f %f", &p, &t, &r);

    si = (p * t * r) / 100;
    ci = p * pow((1 + r / 100), t) - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);
    return 0;
}