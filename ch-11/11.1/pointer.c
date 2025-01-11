#include<stdio.h>

void main()
{
    int a=10;
    int b=10;

    int *ptr;

    ptr = &a;  
    ptr = &b; 

    printf("%d\n",&a);
    printf("%d\n",a);
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    printf("%d\n",&b);
    printf("%d\n",ptr);

}