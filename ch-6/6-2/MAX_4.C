#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();

	printf("enter a,b,c and d:");
	scanf("%d %d %d %d",&a,&b,&c,&d);

	if(a==b && a==c && a==d && b==c && b==d && c==d)
	{
	      printf("all are equal..");
	}
	else if(a==b || a==c || a==d || b==c || b==d || c==d )
	{
	      printf("both are equal..");
	}
	else
	{
	if(a>b)
	{
	     if(a>c)
	     {
		printf("%d is maximum",a);
	     }
	     else
	     {
		printf("%d is maximum",c);
	     }
	}
	else if(a>d)
	{
		if(b>c)
		{
		   printf("%d is maximum",b);
		}
		else
		{
		    printf("%d is maximum",c);
		}
	}
	else
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

	}

	getch();
}