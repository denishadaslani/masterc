#include <stdio.h>

// TNRS => take nothing return somting
int divide()
{
    int n;
    printf("Enter any number:");
    scanf("%d", &n);
    return n;
}

int main()
{
    int n = divide();

    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("\nThe give number is divisible by both 3 & 5.");
    }
    else
    {
        printf("\nThe give number is not divisible by both 3 & 5.\n");
    }
    printf("\n\n");
    // printf("%d", n);
}
