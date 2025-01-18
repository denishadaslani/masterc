#include <stdio.h>

void fibonaci(int *num)
{
    int a = 0;
    int b = 1;
    printf("\n");
    int *ptr1 = &a;
    int *ptr2 = &b;
    int c = *ptr1 + *ptr2;
    printf("%d\t", *ptr1);
    printf("%d\t", *ptr2);
    for (int i = 0; i < *num; i++)
    {
        printf("%d", c);
        *ptr1 = *ptr2;
        *ptr2 = c;
        c = *ptr1 + *ptr2;
    }
}

void main()
{
    int num;
    printf("Enter any number:");
    scanf("%d", &num);

    fibonaci(&num);
}