#include <stdio.h>

void main()
{
    int size;

    printf("Enter any size:");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter any element a[%d]:", i);
        scanf("%d", &a[i]);
    }

    int *ptr[size];
    int **ptr2[size];

    for (int i = 0; i < size; i++)
    {
        ptr[i] = &a[i];
    }

    for (int i = 0; i < size; i++)
    {
        ptr2[i] = &ptr[i];
    }

    for (int i = 0; i < size; i++)
    {
        **ptr2[i] = ((*ptr[i]) * (*ptr[i]));
    }

    int n = size - 1;

    for (int i = 0; i < size / 2; i++, n--)
    {
        int c = **ptr2[i];
        **ptr2[i] = a[n];
        a[n] = c;
    }

    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *ptr[i]);
    }
}