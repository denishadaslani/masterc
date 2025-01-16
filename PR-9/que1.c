#include <stdio.h>

void main()
{

    FILE *even;
    FILE *odd;

    even = fopen("even_file.txt", "w");
    odd = fopen("odd_file.txt", "w");

    if (even != '\0' || odd != '\0')
    {
        printf("file is open..\n");

        for (int i = 50; i <= 70; i++)
        {
            if (i % 2 == 0)
            {
                fprintf(even, "%d\t", i);
            }
            else
            {
                fprintf(odd, "%d\t", i);
            }
            fclose(even);
            fclose(odd);
        }
    }
    else
    {
        printf("file is not open..\n");
    }
}
