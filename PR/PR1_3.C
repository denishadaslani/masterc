#include<stdio.h>
#include<conio.h>
main(){

	int Firstangle,Secondangle,Thirdangle;
	clrscr();

	printf("First angle:");
	scanf("%d",&Firstangle);

	printf("\nsecond angle:");
	scanf("%d",&Secondangle);

	Thirdangle= 180 -(Firstangle+Secondangle);

	printf("\nthird angle:%d",Thirdangle);
	getch();


}