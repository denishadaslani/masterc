#include<stdio.h>

void main()
{
    //staic

    int a[5] = {1,2,3,4,5};

    int *ptr[5];

    

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = &a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",*ptr[i]);
    }
    
}