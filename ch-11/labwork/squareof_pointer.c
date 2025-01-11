#include <stdio.h>

void main()
{
    int size;
    int *ptr;
 

    printf("Enter any size:");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter any element a[%d]:", i);
        scanf("%d", &a[i]);
        ptr = a;
    }

    for (int i = 0; i < size; i++)
    {
        printf("Square of each element:%d\n", (*(ptr + i)) * (*(ptr + i)));
    }
}