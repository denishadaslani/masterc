#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int j;
	clrscr();
	for(i=1;i<=7;i++)
	{
	  for(j=1;j<=4;j++)
	  {
		if(j==1 ||(i==7 && j!=4)|| (i==1 && j!=4)|| (i==4 && j!=4))
		{
		 printf(" *");
		}
		else
		{
		  printf("  ");
		}
	  }
	  printf("\n");
       }
	getch();
}
