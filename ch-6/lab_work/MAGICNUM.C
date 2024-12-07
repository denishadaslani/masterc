#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	int i=1;
	int sum=0;
	int rem;
	int multi=1;

	clrscr();
	printf("enter any number:\n");
	scanf("%d",&num);

	while(1<=num)
	{
	     rem = num%10;
	     sum = sum+rem;
	     multi =multi*rem;
	     num  = num/10;
	     i++;

	}

	if(sum==multi)
	{
	       printf("it is magicnumber");
	}
	else
	{
	      printf("it is not magicnumber");
	}
	getch();
}
