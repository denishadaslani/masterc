#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	int firstdigit;
	int lastdigit;
	int sum;

	clrscr();

	printf("Enter any number:\n");
	scanf("%d",&n);

	lastdigit = n % 10;
	firstdigit = n;

	while(firstdigit >= 10)
	{
		firstdigit=firstdigit / 10;
	}

	sum = firstdigit + lastdigit;
	printf("The sum of the first and last digit:%d",sum);
	getch();
}