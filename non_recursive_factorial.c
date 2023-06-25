/*Program to find factorial of a number using a non-recursive function which returns a value to the main function*/

#include <stdio.h>

int fact(int x);

void main()
{
    int n, factorial;
    printf("Enter the number : ");
    scanf("%d", &n);     // Getting the value of N
    factorial = fact(n); // Return from the fact function is stored into a variable called factorial
    printf("The factorial of %d = %d", n, factorial);
}

int fact(x)
{
    int i, factorial = 1;
    for (i = 1; i <= x; i++) // Loop from x=N till x=1
    {
        factorial = factorial * i; // Looping     (Multiply the n-1 value untill n=1 , ie 5*4*3*2*1)
    }
    return factorial; // sine this is an int function you need to return something to the initial call.
}