#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	clrscr();
	printf("enter a number:");
	scanf("%d",&n);

	if(n % 2 == 0)
	{
	     printf("%d is even number");
	}
	else
	{
		printf("%d is odd number");
	}
}
