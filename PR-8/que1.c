#include <stdio.h>

void main()
{
    char str[20];

    char *ptr[20];

    int len = 0;

    printf("Enter any string :");
    scanf("%[^\n]", &str);

    for (int i = 0; str[i] != '\0'; i++, len++)
    {
        ptr[i] = &str[i];
    }

    printf("The length of a string is : %d", len);
}
