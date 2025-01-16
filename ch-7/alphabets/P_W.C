#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=7;i++)
	{
	for(j=1;j<=5;j++)
	{
	 if( ((j==1 || j==5)) || ((i==5)&&(j==3)) || ((i==6)&&(j!=3)) )
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