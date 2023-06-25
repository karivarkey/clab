#include <stdio.h>

int fact(int x);

void main()
{
    int n, factorial;
    printf("Enter the number : ");
    scanf("%d", &n);
    factorial = fact(n);
    printf("The factorial of %d = %d", n, factorial);
}

int fact(x)
{
    int i, factorial = 1;
    for (i = 1; i <= x; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}