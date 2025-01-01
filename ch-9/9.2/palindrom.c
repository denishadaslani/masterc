#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    char original[30];

    printf("Enter any string:");
    gets(name);

    puts(name);

    strcpy(original, name);
    printf("original string:%s", original);

    printf("\n");

    strrev(name);
    printf("reverse string:%s", name);

    printf("\n");

    int cmp = strcmp(original,name);

    if (cmp == 0)
    {
        printf("It's palindrome string");
    }
    else
    {
        printf("It's not palindrome string");
    }
}