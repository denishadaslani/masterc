#include<stdio.h>
#include<conio.h>
void main(){
	       /*
		 1
	       2 1
	     3 2 1
	   4 3 2 1
	 5 4 3 2 1*/
    int i;
    int j;
    int s;
    clrscr();
    for(i=1;i<=5;i++)
	{
	 for(s=1;s<=5;s++)
	 {
	    printf(" ");
	 }
	 for(j=i;j>=1;j--)
	 {
		 printf("%d",j%2);
	 }
	 printf("\n");
	}
    getch();
}
