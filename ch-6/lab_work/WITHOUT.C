#include<stdio.h>
#include<conio.h>

main()
	{
		int n;
		clrscr();

		printf("ENTER ANY NUMBER:");
		scanf("%d",&n);

		if((n/2)*2==n)
		{ 	clrscr();
			printf("\n\n\n");
			printf("%d is a even number");

		}
		else
		{       clrscr();
			printf("\n\n\n");
			printf("==================\n");
			printf("|| %d is a odd number ||\n");
			printf("==================");
		}
		getch();

	}
