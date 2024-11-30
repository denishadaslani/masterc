#include<stdio.h>
#include<conio.h>

main()
{
       int a,b;
       clrscr();
       printf("enter a value of the first number:");
       scanf("%d",&a);

       printf("enter a value of the second number:");
       scanf("%d",&b);


       if(a<b)    // 8 > 3
       {
		printf("the minimum value is: %d",a);
       }
       else
       {
		printf("the minimum value is: %d ",b);
       }
       getch();
}