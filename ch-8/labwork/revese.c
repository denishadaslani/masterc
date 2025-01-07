#include <stdio.h>

main()
{
    char size;

    printf("Enter any size:");
    scanf("%d", &size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("enter element:");
        scanf(" %d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
        
    }
    printf("\n");
    

    int n = size - 1;

    for (int i = 0; i < size / 2; i++,n--)
    {
        int c = a[i];
        a[i] = a[n];
        a[n] = c;
    }

    for (int i = 0; i < size; i++)
    {
        printf(" %d",a[i]);
    }
}