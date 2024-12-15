#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int j;
	clrscr();
	for(i=1;i<=5;i++)
	{
	 for(j=1;j<=i;j++)
	 {
	    if(j%2==0)
	    {
	     printf(" 1");
	    }
	    else
	    {
	    printf(" 0");
	    }
	 }
	    printf("\n");
	}
	getch();
}