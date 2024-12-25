#include<stdio.h>
int main()
{
    int size1,size2;
    printf("enter first array size");
    scanf("%d",&size1);
    printf("enter second array size");
    scanf("%d",&size2);
    int a[size1],b[size2],marge[size1+size2];

    printf("\narray first input\n");
    for(int i=0;i<size1;i++)
    {
        printf("enter first elementa[%d]",i);
        scanf("%d",&a[i]);
    }

    printf("\narray second input\n");
     
    for(int i=0;i<size2;i++)
    {
        printf("enter second elementb[%d]",i);
        scanf("%d",&b[i]);
       
    }

    printf("\nmarge element\n");

    for(int i=0;i<size1;i++)
    {
        marge[i]=a[i];
    }

    for(int i=0;i<size2;i++)
    {
        marge[i+size1]=b[i];
    }
     for(int i=0;i<size1+size2;i++)
    {
        printf("%d\t",marge[i]);
    }

    


}