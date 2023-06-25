/*A c program to recursively find the factorial of a function using an int  function called factorial*/
#include <stdio.h>

int factorial(int n);

void main()
{
    int n, fact;
    printf("Enter the number : ");
    scanf("%d", &n);     // get the value of n
    fact = factorial(n); // calling the function
    printf("The factorial of %d = %d", n, fact);
}

int factorial(n)
{
    int fact;
    fact = 1;
    if (n >= 1) // base condition for recursion
    {
        fact = n * factorial(n - 1); // if base conditon is not met , do factorial of (n-1). This will keep on happening unitl N=1 (then the calculation will turn out to be , 5*4*3*2*1)
    }
    return fact; // This is an int function hence we are reutning the value to main function
}