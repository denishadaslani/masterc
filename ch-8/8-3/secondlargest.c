#include<stdio.h>

int main()
{
    int size;

    printf("Enter any size:");
    scanf("%d",&size);

    int a[size];

    printf("\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter any element a[%d]:",i);
        scanf("%d",&a[i]);
    }

    printf("\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }

    printf("\n");

    int max = 0;
    int smax;
    int tmax;

    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            tmax = smax;
            smax = max;
            max = a[i];
        }
    }

    printf("\n\n");
    printf("T max: %d",tmax);
}