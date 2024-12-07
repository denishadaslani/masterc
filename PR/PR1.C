#include<stdio.h>
#include<conio.h>
main(){
	float c,f;
	clrscr();

	printf("The temperature in celsius:");
	scanf("%f",&c);

	f = (9/5 * c) + 32;

	printf("\nThe temperature in fahrenheit: %0.2f",f);
	getch();


}