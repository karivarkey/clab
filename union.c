#include <stdio.h>
#include <string.h>
#define C_SIZE 50
union Address
{
    char name[C_SIZE];
    char hname[C_SIZE];
    char cityname[C_SIZE];
    char state[C_SIZE];
    char pin[C_SIZE];
};
int main()
{
    union Address record;
    printf("Enter name: ");
    scanf("%[^\n]", record.name);
    getchar();
    printf("Enter house name: ");
    scanf("%[^\n]", record.hname);
    getchar();
    printf("Enter city name: ");
    scanf("%[^\n]", record.cityname);
    getchar();
    printf("Enter state name: ");
    scanf("%[^\n]", record.state);
    getchar();
    printf("Enter pin: ");
    scanf("%[^\n]", record.pin);
    printf("Union record values: \n");
    printf(" Name : %s \n", record.name);
    printf(" House Name : %s \n", record.hname);
    printf(" City Name : %s \n\n", record.cityname);
    printf(" State name : %s \n", record.state);
    printf(" Pin : %s \n\n", record.pin);
    return 0;
}