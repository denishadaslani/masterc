#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("enter a value of first number:");
	scanf("%d",&a);

	printf("enter a value of second number:");
	scanf("%d",&b);

	if(a>b)
	{
		printf("the value is maximum value:%d",a);
	}

	else
	{
	    printf("the value is maximum value:%d",b);
	}

	getch();
}