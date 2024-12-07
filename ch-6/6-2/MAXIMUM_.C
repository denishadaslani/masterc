#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();

	printf("Enter a number a,b,c and d:");
	scanf("%d %d %d %d",&a,&b,&c,&d);

	if(a==b && a==c && b==c && a==d && b==d && c==d)
	{
		printf("all are equal..");
	}
	else if(a==b==c || b==a==c || c==a==b  || d==a==b ||d==b==c)
	{
		printf("therd are equal.. ");
	}
	else if(a==b || a==c || b==c || a==d || b==d || c==d)
	{
		printf("both are equal..");
	}
	else
	{
	 if(a>b)
	{
	      if(a>c)
	      {
		  printf("%d is a maximum",a);
	      }
	      else
	      {
		  printf("%d is a maximum",c);
	      }
	}
	else if(b>c)
	{
	       if(b>d)
	       {
		 printf("%d is maximum",b);
	       }
	       else
	       {
		 printf("%d is maximum",d);
	       }
	}
	else
	{
		if(c>d)
		{
		  printf("%d is maximum",c);
		}
	       else
	       {
		  printf("%d is maximum",d);
	       }

	}
	}




	getch();
}