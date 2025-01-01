#include<stdio.h>

int main()
{
    int size;
    
    printf("Enter your size:");
    scanf("%d",&size);

    int a[size];

    printf("\nArray input:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }

    printf("\nArray output\n");
    for(int i=0;i<size;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
 
    int ch;

    printf("1.insert\n");
    printf("2.display\n");
    printf("3.update\n");
    printf("4.delete\n");
    printf("5.Exit\n");

    printf("\nEnter your choice:");
    scanf("%d",&ch);

        int value;
        int pos;

do
{
    switch(ch)
    {
       
        case 1:
        printf("Enter value:");
        scanf("%d",&value);

        printf("Enter your position:");
        scanf("%d",&pos);

        for(int i=pos; i<size; i++)
        {
            a[i+1] = a[i];
        }
        size++;
        a[pos] = value;
        break;    

        case 2:
        for (int  i = 0; i < size; i++)
        {
          printf("%d",a[i]);
        }
        
        break;
    }
  
} while (ch != a[pos]);
  
}