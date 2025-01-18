#include <stdio.h>

int sumArray(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;
}

void main()
{
    int size;

    printf("Enter any size:");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter any element a[%d]", i);
        scanf("%d", &a[i]);
    }

    int result = sumArray(a, size);

    printf("The sum of element is: %d\n", result);
}
