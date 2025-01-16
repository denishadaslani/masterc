#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=7;i++)
	{
	 for(j=1;j<=6;j++)
	 {
	    if(j==4 || (i==1 && j!=1) || ((i==6)&&(j==1)) || ((i==7)&&(j==2)) )
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

