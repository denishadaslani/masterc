#include<stdio.h>
int main()
{
    int size;
    printf("enter any element of size:");
    scanf("%d",&size);

    int a[size];
    printf("\narrray input:");

    for (int i = 0; i < size; i++)
    {
        printf("enter any element a[%d]:",i);
        scanf("%d",&a[i]);
    }

    int n;
    printf("enter n value :");
    scanf("%d",&n);

    for (int  i = 0; i < size; i++)
    {
        for (int  j=i+1; j < size; j++)
        {
            if (a[i] + a[j] == n)
            {
                printf("%d %d\n",a[i],a[j]);
            }
            
        }
    }


}