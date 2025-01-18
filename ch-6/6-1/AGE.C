#include <stdio.h>
// #include <conio.>

main()
{
	int age;
	// clrscr();
	printf("enter your age:");
	scanf("%d", &age);

	if (age >= 18)
	{
		printf("you can vote...");
	}
	else
	{
		printf("you can not vote");
	}

	// getch();
}