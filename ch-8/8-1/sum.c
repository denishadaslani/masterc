#include<stdio.h>
int main()
{
    int size;
    printf("enter any element:");
    scanf("%d",&size);

    int a[size];

    printf("\narray input\n");
    for(int i=0;i<size;i++)
    {
        printf("Enter Element %d:",i+1);
        scanf("%d",&a[i]);
    }
     printf("\narray output\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d",a[i]);
    }
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum=a[i] + sum;
        printf("\n");
    }
    printf("array sum:%d:",sum);
    printf("\n");
    printf("array avg\t:%2.f",(float)sum/size);
}