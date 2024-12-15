#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	int j;
	int s;
	clrscr();
	for(i=1;i<=5;i++)
	{
	 for(s=5;s>i;s--)
	 {
	    printf(" ");
	 }
	 for(j=1;j<=i;j++)
	 {
	   printf("%d",j);
	 }

	 for(j=i-1;j>=1;j--)
	   {
	       printf("%d",j);
	   }
	 printf("\n");
	}
	getch();
}