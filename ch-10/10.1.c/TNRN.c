#include<stdio.h>
 
//TNRN => Take Nothing Return Nothing

void  print();

void main()
{
    int pr;
    printf("Enter any Number:");
    scanf("%d",& pr);

    for (int i = 0; i < pr; i++)
    {
        print();
        printf("\n");
    }
}

void print()
{
    printf("Hello Denisha...");
}

