#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	clrscr();

	printf("Enter any character:");
	scanf("%c",&ch);

	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') )
	{
		printf("it is Alfabhet");
	}
	else if(ch>='0'&& ch<='9')
	{
	     printf("it is a number");
	}
	else
	{
	     printf("it is a symbol");
	}


	getch();


}
