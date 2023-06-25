/*Known BUG!! - Words less than 4 letters will print garbage value after reversed!!*/

/*A c program to find the reverse of a word using a  void function*/
#include <stdio.h>

void reverse(char s[]);

void main()
{
    char str[20], rev[30];
    printf("Enter the word : ");
    scanf("%s", str);  // Input string
    reverse(str);      // calling the function
    printf("\n Done"); // For checking if reversing done or not , may delte.
}

void reverse(char s[])
{
    int count = 0, i, copy;
    char new[20];
    for (i = 0; s[i] != '\0'; i++) // count number of letters in the word
    {
        count++;
    }
    count--;      // since we count from 0 , we have to decrement 1 from the count variable
    copy = count; // copy the value of count to another variable

    for (i = 0; i <= copy; i++)
    {
        new[count] = s[i];
        count--;
    }
    printf("The reverse is %s", new);
}