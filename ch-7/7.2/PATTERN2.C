#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int j;
	int s;
	clrscr();
	for(i=5;i>=1;i--)
	{
	 for(s=5;s>=i;s--)
	 printf(" ");
	 for(j=i;j>=1;j--)
	 printf("%d",j);
	 printf("\n");
	}
	getch();
}