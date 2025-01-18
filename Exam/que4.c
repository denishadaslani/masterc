#include <stdio.h>

void main()
{
    int size;
    printf("Enter any size:");
    scanf("%d", &size);
    int a[size];

    int *ptr = a;

    for (int i = 0; i < size; i++)
    {
        printf("enter any element a[%d]", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i)));
    }
}