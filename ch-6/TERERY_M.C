#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("enter number a,b and c:");
	scanf("%d %d %d",&a,&b,&c);
	(a<b)
	     ?(a<c)
		    ?printf("%d is minimum",a)
		    :printf("%d is minimum ",c)
	      :(b<c)
		    ?printf("%d is minimum",b)
		    :printf("%d is minimum",c);

	getch();



}