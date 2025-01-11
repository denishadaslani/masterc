#include <stdio.h>

void main()
{
    int x;
    int y;

    int *ptr;
    int *ptr2;

    printf("Before swaping:\n\n");

    printf("Enter x element:");
    scanf("%d", &x);

    printf("Enter y element:");
    scanf("%d", &y);

    // x = x + y;
    // y = x - y;
    // x = x - y;

    ptr = &x;
    ptr2 = &y;

    printf("\n\nAfter swaping:\n");

    *ptr = *ptr + *ptr2;
    *ptr2 = *ptr - *ptr2;
    *ptr = *ptr - *ptr2;

    printf("X :%d\n", x);
    printf("Y :%d\n", y);
}