#include <stdio.h>

void main()
{
    int n = 11;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            printf(" %d", n);
            n++;
        }
        printf("\n");
    }
}
