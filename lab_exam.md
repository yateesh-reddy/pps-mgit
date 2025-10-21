# 1

## 1. Simple and Compound Interest

```c
#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, si, ci;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);

    si = (p * r * t) / 100;
    ci = p * pow((1 + r / 100), t) - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);
    return 0;
}
```

## 2. Maximum and Minimum of Three Numbers

```c
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

    printf("Maximum = %d\nMinimum = %d\n", max, min);
    return 0;
}
```

## 3. Roots of a Quadratic Equation

```c
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, root1, root2;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are real and distinct: %.2f and %.2f\n", root1, root2);
    } else if (d == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and equal: %.2f\n", root1);
    } else {
        float real = -b / (2 * a);
        float imag = sqrt(-d) / (2 * a);
        printf("Roots are complex: %.2f ± %.2fi\n", real, imag);
    }
    return 0;
}
```

## 4. Simple Calculator using Switch

```c
#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("Enter two integers and an operator (+, -, *, /, %%): ");
    scanf("%d %d %c", &a, &b, &op);

    switch (op) {
        case '+': printf("Result = %d\n", a + b); break;
        case '-': printf("Result = %d\n", a - b); break;
        case '*': printf("Result = %d\n", a * b); break;
        case '/': printf("Result = %d\n", b != 0 ? a / b : 0); break;
        case '%': printf("Result = %d\n", a % b); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
```

## 5. Multiplication Table

```c
#include <stdio.h>

int main() {
    int num, rows;
    printf("Enter number and number of rows: ");
    scanf("%d %d", &num, &rows);

    for (int i = 1; i <= rows; i++)
        printf("%d x %d = %d\n", num, i, num * i);

    return 0;
}
```

## 6. Sum of Digits

```c
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
```

## 7. Palindrome Check

```c
#include <stdio.h>

int main() {
    int n, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    if (rev == n)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
```

## 8. Fibonacci Sequence

```c
#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, next;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    return 0;
}
```

## 9. Prime Number Check

```c
#include <stdio.h>

int main() {
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) isPrime = 0;
    else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    printf(isPrime ? "Prime\n" : "Not Prime\n");
    return 0;
}
```

## 10. Read and Print an Array

```c
#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Array elements are:\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    return 0;
}
```

## 11. Minimum, Maximum, and Average of Array

```c
#include <stdio.h>

int main() {
    int arr[10], min, max, sum = 0;
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) scanf("%d", &arr[i]);

    min = max = arr[0];
    for (int i = 0; i < 10; i++) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
        sum += arr[i];
    }

    printf("Min = %d, Max = %d, Average = %.2f\n", min, max, sum / 10.0);
    return 0;
}
```

## 12. Addition of Two Matrices

```c
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    printf("Sum of matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }
    return 0;
}
```

## 13. Subtraction of Two Matrices

```c
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], diff[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    printf("Difference of matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d ", a[i][j] - b[i][j]);
        printf("\n");
    }
    return 0;
}
```

## 14. Multiplication of Two Matrices

```c
#include <stdio.h>

int main() {
    int a[10][10], b[10][10], prod[10][10], r1, c1, r2, c2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    printf("Enter first matrix:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter second matrix:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++) {
            prod[i][j] = 0;
            for (int k = 0; k < c1; k++)
                prod[i][j] += a[i][k] * b[k][j];
        }

    printf("Product of matrices:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            printf("%d ", prod[i][j]);
        printf("\n");
    }
    return 0;
}
```

## 15. Transpose of a Matrix

```c
#include <stdio.h>

int main() {
    int a[10][10], t[10][10], r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }
    return 0;
}
```
