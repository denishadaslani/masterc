#include<stdio.h>

int main()
{
    int size;

    printf("enter any element size:");
    scanf("%d",&size);

    int a[size];

    printf("\ninput of element\\n");
    for(int i=0; i<size;i++)
    {
        printf("Enter any Element:a[%d]",i);
        scanf("%d",&a);
    }
    
    printf("output:");
   
        printf("%d",size);


}