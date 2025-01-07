#include <stdio.h>

int cube()
{
    int n;
    printf("Enter any number:");
    scanf("%d", &n);
    return n * n * n;
}

char printchar()
{

    char ch;

    printf("Enter any charcter:");
    scanf(" %d", &ch);
    return ch;
}

int main()
{
    int result = cube();
    printf("%d\n", result);

    char ch = printchar();
    printf(" %c", ch);
}
