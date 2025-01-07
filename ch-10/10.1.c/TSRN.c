#include<stdio.h>

//TSRN => Take Somting Return Nothing

void sum(int a,int b);

void main()
{
    int a,b;

    printf("Enter x and y  value:");
    scanf("%d %d",&a,&b);
    sum(a , b);
}

void sum (int a,int b)
{
    printf("%d +  %d = %d",a,b, a+b);
}





