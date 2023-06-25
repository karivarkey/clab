#include <stdio.h>

void reverse(char s[]);

void main()
{
    char str[20];
    printf("Enter the word : ");
    scanf("%s", str);
    reverse(str);
}

void reverse(char s[])
{
    int count = 0, i, copy;
    char new[20];
    for (i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    count--;
    copy = count;

    for (i = 0; i <= copy; i++)
    {
        printf("%d %d \n %c %c \n", i, count, s[i], s[count]);
        new[count] = s[i];
        count--;
        printf("The string is : %s", new);
    }
    printf("The reverse is %s", new);
}