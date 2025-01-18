#include <stdio.h>
main()
{

    char str[30];
    char rev[30];

    printf("Enter any string:");
    scanf("%[^\n]", &str);

    // string lowercase

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    // string length
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++, len++)
        ;

    // string reverse
    int n = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        rev[n++] = str[i];
    }

    int cmp;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == rev[i])
        {
            cmp = 0;
        }
        else
        {
            cmp = 1;
            break;
        }
    }

    if (cmp == 0)
    {
        printf("it is palidrom");
    }
    else
    {
        printf(" it is not palidrom");
    }
}