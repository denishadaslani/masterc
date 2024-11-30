#include<stdio.h>
#include<conio.h>
main(){

	int a = 225;
	clrscr();

	printf("%d %d %d %d %d",++a,--a,++a,a--,--a);

	printf("\n\n");

	printf("%d",++a);
	printf("%d",--a);
	printf("%d",++a);
	printf("%d",a--);
	printf("%d",--a);

	getch();
}