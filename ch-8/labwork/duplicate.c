#include <stdio.h>
int main()
{

    int size;
    printf("enter any size:");
    scanf("%d", &size);

    int a[size];

    printf("input array:");

    for (int i = 0; i < size; i++)
    {
        printf("\nenter any element a[%d]:", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                a[j] = '\0';
            }
        }
    }

    printf("\n array withot duplicates:");

    for (int i = 0; i < size; i++)
    {
        if (a[i] != 0)
        {
            printf("%d", a[i]);
        }
    }
}
