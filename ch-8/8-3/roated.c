#include<stdio.h>

main()
{
    int size;

    printf("Enter any size:");
    scanf("%d",&size);

    int a[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter any elementa[%d]:",i);
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

    int index;
    int n = 0;

    printf("Enter the index:");
    scanf("%d",&index);
    
    for (int i = 0; i < index; i++)
    {
        int n = a[0];

        for (int j = 0; j < size; j++)
        {
            a[j] = a[j+1];
        }
     a[size-1] = n;
    }
    printf("\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
}