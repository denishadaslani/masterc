#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int j;
	int n=11;
	clrscr();
	for(i=1;i<=4;i++)
	{
	  for(j=i;j>=1;j--)
	  {
	    printf(" %d",n);
	    n++;
	  }
	  printf("\n");
	}
	getch();
}