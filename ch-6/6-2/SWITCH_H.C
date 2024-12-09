
#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("/\\WELCOME/\\ \n");
	printf("enter 1 panjabi\n");
	printf("enter 2 gujrati\n");
	printf("enter 3 south indian\n");
	printf("enter your choice:");
	scanf("%d",&n);


	switch(n)
	{
	      case 1:
		     printf("1.kaju kari\n");
		     printf("2.panner tika\n");
		     printf("3.kaju masala\n");
		     printf("enter your choice:");
		     scanf("%d",&n);
		      switch(n)
		      {
			case 1:
				printf("your oder is prepar..");
				break;
			case 2:
				printf("your oder is prepar..");
				break;

			case 3:
				printf("your oder is prepar..");
				break;

			default:
				printf("invalid choice");
				break;
		      }

		     break;


	      case 2:
		     printf("1.dal-rice\n");
		     printf("2.roti\n");
		     printf("3.poteto\n");
		     printf("enter your choice:");
		     scanf("%d",&n);
		      switch(n)
		      {
			case 1:
				printf("your oder is prepar..");
				break;
			case 2:
				printf("your oder is prepar..");
				break;

			case 3:
				printf("your oder is prepar..");
				break;
			 default:
				printf("invalid choice");
				break;
		      }


			break;
		 /* default:
		  printf("invalid choice");
		  break;*/


	      case 3:
		     printf("1.dosa\n");
		     printf("2.edali\n");
		     printf("3.mendu vada\n");
		     printf("enter your choice:");
		     scanf("%d",&n);
		      switch(n)
		      {
			case 1:
				printf("your oder is prepar..");
				break;
			case 2:
				printf("your oder is prepar..");
				break;

			case 3:
				printf("your oder is prepar..");
				break;
		  //default:
		 // printf("invalid choice");
		  break;


	}
		  default:
		  printf("invalid choice");
		  break;

		  break;
	}


       getch();

}