#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int j;
	int n=1;
	int gap;
	clrscr();
	for(i=1;i<=5;i++)
	{
	  n=i;
	  gap=4;
	 for(j=i;j>=1;j--)
	 {
	     printf(" %d",n);
	     n=n+gap;
	     gap--;
	 }
	 printf("\n");
	}
	getch();
}