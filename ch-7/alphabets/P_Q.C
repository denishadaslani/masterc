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
	  if( ((i==1)&&(j>=2&&j<=4)) || ((i==2||i==3||i==4)&&(j==5)) || ((j==1)&&(i!=1&&i!=7)) || ((i==5)&&(j>=3&&j<=5 &&j!=4)) || ((i==6)&&(j==4)) || ((i==7)&&(j>=2&&j<=6&&j!=4&&j!=5)) )
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