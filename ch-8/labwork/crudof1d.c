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
        printf(" %d",a[i]);
       
    }
 
    int ch;
    int value;
    int pos;

do
{
    printf("\n1.insert\n");
    printf("2.display\n");
    printf("3.update\n");
    printf("4.delete\n");
    printf("5.Exit\n");

    printf("\n");
    printf("\nEnter your choice:");
    scanf("%d",&ch);

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
        printf("\n");
        break;    

        case 2:

        printf("\n\n");
        for (int  i = 0; i < size; i++)
        {
          printf("%d",a[i]);
        }
            printf("\n\n");
        
        break;

        

        case 3:
         printf("Enter value:");
         scanf("%d",&value);

         printf("Enter your position:");
         scanf("%d",&pos);

         a[pos] = value;

        break;

        case 4:
       
        printf("\n");

            printf("Enter your position");
            scanf("%d",&pos);

            for (int i = pos; i < size; i++)
            {
                a[i] = a[i+1];
            }
            size--;
            
        break;
    }
  
} while (ch != 5);
  
}