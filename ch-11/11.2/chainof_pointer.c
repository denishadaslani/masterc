#include<stdio.h>

void main()
{
    int a = 10;


     int *ptr;
     int **ptr2;
     int ***ptr3;

     ptr = &a;
     ptr2 = &ptr;
     ptr3 = &ptr2;

    printf("%d\t",a);
    printf("%d\t",*ptr);
    printf("%d\t",**ptr2);
    printf("%d\t",***ptr3);

}