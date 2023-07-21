#include <stdio.h>
struct Employee
{
    int empid;
    char name[50];
    int salary;
} emp[50];
int main()
{
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the employee %d's details:\n", i + 1);
        printf("Employee id: ");
        scanf("%d", &emp[i].empid);
        getchar();
        printf("Employee name: ");
        scanf("%[^\n]", emp[i].name);
        printf("Employee salary: ");
        scanf("%d", &emp[i].salary);
    }
    printf("Employee Details:\n");
    printf("Employee id Employee name Employee salar is : y\n");
    for (i = 0; i < n; i++)
        printf("%d %s %d\n", emp[i].empid, emp[i].name, emp[i].salary);
    return 0;
}