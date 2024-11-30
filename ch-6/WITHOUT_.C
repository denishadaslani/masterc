#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("enter any number:");
	scanf("%d",&n);

	if((n/2)*2==n)
	{
		printf("it is even number:");
	}
	else
	{
		printf("it is a odd number:");
	}
	getch();

}