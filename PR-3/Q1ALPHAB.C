#include<stdio.h>
#include<conio.h>
void  main()
{
	char ch='a';
	int n;

	clrscr();
	do
	{
	     printf("%c\t",ch);
	     ch=ch+4;
	     continue;
	}
	while(ch<='z');
	getch();
}
