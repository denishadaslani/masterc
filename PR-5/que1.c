#include <stdio.h>

int main()
{
    int size;

    printf("Enter size of elememt:");
    scanf("%d", &size);

    int a[size];

    printf("\nArray input:-\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter a elment a[%d]:", i);
        scanf("%d", &a[i]);
    }
    printf("\n");

    printf("Array output:");
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            printf("%d ", a[i]);
        }
    }
}
