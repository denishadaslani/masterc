#include <stdio.h>
void main()
{
    int size;
    printf("Enter any size:");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter any elemnet a[%d]", i);
        scanf("%d", &a[i]);
    }

    int n = size - 1;

    for (int i = 0; i < size / 2; i++, n--)
    {
        int c = a[i];
        a[i] = a[n];
        a[n] = c;
    }
    printf("Reverse array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n\n");
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum is : %d", sum);
}
