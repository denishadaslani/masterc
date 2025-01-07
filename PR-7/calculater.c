#include <stdio.h>
#include "function.c"

int main()
{
    int ch;
    int first;
    int second;
    int result;

    do
    {
        printf("press 1 for +\n");
        printf("press 2 for -\n");
        printf("press 3 for *\n");
        printf("press 4 for /\n");
        printf("press 5 for %%\n");
        printf("press 0 for the exit\n");

        printf("\nEnter your choice:");
        scanf("%d", &ch);

        printf("\n");

        if (ch >= 1 && ch <= 5)
        {
            printf("Enter first number:");
            scanf("%d", &first);

            printf("Enter second number:");
            scanf("%d", &second);
        }
        else if (ch == 0)
        {
            break;
        }

        switch (ch)
        {
        case 1:

            result = Addtion(first, second);
            printf("Addtion of %d and %d  is %d", first, second, result);
            printf("\n\n");
            break;

        case 2:

            result = Subtraction(first, second);
            printf("subtraction of %d and %d  is %d", first, second, result);
            printf("\n\n");
            break;

        case 3:

            result = Multiplication(first, second);
            printf("multiplication of %d and %d  is %d", first, second, result);
            printf("\n\n");

            break;

        case 4:

            result = Division(first, second);
            printf("division of %d and %d  is %d", first, second, result);
            printf("\n\n");

            break;

        case 5:

            result = Module(first, second);
            printf("module of %d and %d  is %d", first, second, result);
            printf("\n\n");

            break;

        default:
            printf("Invalid choice.Enter a valid choice.\n\n");
            break;
        }

    } while (ch != 0);
}