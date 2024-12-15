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
	  for(s=1;s<i;s++)
	  {
	     printf(" ");
	  }
	  for(j=i;j<=5;j++)
	  {
	    printf("%d",j);
	  }
	  for(j=5-1;j>=i;j--)
	  {
	  printf("%d",j);
	  }
	  printf("\n");
	}
	getch();
}