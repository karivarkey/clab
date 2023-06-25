#include <stdio.h>

int factorial(int n);

void main()
{
    int n, fact;
    printf("Enter the number : ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("The factorial of %d = %d", n, fact);
}

int factorial(n)
{
    int fact;
    fact = 1;
    if (n >= 1)
    {
        printf("%d %d \n ", n, fact);
        fact = n * factorial(n - 1);
    }
    return fact;
}