#include <stdio.h>

void main()
{

    int first, second;

    char ch;
    printf("Enter 1 for addition:\n");
    printf("Enter 2 for subtraction:\n");
    printf("Enter 3 for  multiplication:\n");
    printf("Enter 4 for division:\n");
    printf("Enter your choice:");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:

        printf("Enter first number:");
        scanf("%d", &first);

        printf("Enter second number:");
        scanf("%d", &second);

        printf("%d + %d = %d", first, second, first + second);
        break;

    case 2:

        printf("Enter first number:");
        scanf("%d", &first);

        printf("Enter second number:");
        scanf("%d", &second);

        printf("%d - %d = %d", first, second, first - second);
        break;

    case 3:

        printf("Enter first number:");
        scanf("%d", &first);

        printf("Enter second number:");
        scanf("%d", &second);

        printf("%d * %d = %d", first, second, first * second);
        break;

    case 4:

        printf("Enter first number:");
        scanf("%d", &first);

        printf("Enter second number:");
        scanf("%d", &second);

        printf("%d / %d = %d", first, second, first / second);
        break;

    default:
        printf("invalid choice..");
        break;
    }
}