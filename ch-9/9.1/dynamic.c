#include <stdio.h>

int main()
{
    char name[50];

    printf("Enter the name:");
    scanf("%[^\n]", &name);

    printf("%s", name);
}