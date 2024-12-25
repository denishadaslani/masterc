#include <stdio.h>

//dynamic
int main()
{

    int size;
    printf("Enter any element:");
    scanf("%d", &size);

    int a[size];

    printf("\n\nArray input\n\n");

    for (int i = 0; i < size; i++)
    {
        printf("Enter element\n  %d",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("\n\nArray output\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
}
