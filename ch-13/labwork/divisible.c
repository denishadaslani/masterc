#include <stdio.h>
void main()
{
    FILE *fs;
    FILE *ft;

    fs = fopen("divisible.txt", "w");
    ft = fopen("notdivisible.txt", "w");

    if (fs != '\0' && ft != '\0')
    {
        printf("file is open..");
         for (int i = 1; i <= 50; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                fprintf(fs, "%d\t", i);
            }
            else
            {
                fprintf(ft, "%d\t", i);
            }
        }
    }
    else
    {
        printf("file is close..");
    }
}