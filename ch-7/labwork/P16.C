#include<stdio.h>
#include<conio.h>
void main()
{
     int i;
     int j;
     clrscr();
     for(i=5;i>=1;i--)
     {
       for(j=i;j>=1;j--)
       {
	  printf(" %d",j%2);
       }
       printf("\n");
     }
     getch();
}