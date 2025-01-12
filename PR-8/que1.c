#include <stdio.h>

void main()
{
    char str[20];

    char *ptr[20];

    printf("Enter any string :");
    scanf("%[^\n]", &str);

    int len = 0;
    for (char *ptr = str; *ptr != '\0'; ptr++, len++)
        ;
    printf("The length of a string is : %d", len);
}
