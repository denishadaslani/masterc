#include<stdio.h>
#include<conio.h>
main(){

//#define ch clrscr
	int a=20;
	clrscr();
	printf("%d\n",a++);//20
	printf("%d\n",a);   // 21

	printf("%d\n",++a);//21
	printf("%d\n",a);   //21

	printf("%d\n",a--);    //20
	printf("%d\n",a);        //19

	printf("%d\n",--a);    //19
	printf("%d\n",a);        //19


	getch();

}

