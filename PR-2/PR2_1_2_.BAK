#include<stdio.h>
#include<conio.h>

main()
{
	int marks;
	char grade;

	clrscr();
	printf("Enter your marks:");
	scanf("%d",&marks);



  grade = (marks>=90 && marks<=100)
				?'A'
				:(marks>=80 && marks<90)
							?'B'
							:(marks>=70 && marks<80)
										? 'C'
										:(marks>=50 && marks<70)
													? 'D'
													:(marks>=33 && marks<50)
																?'E'
																:(marks<33)
																?'f'
																:printf("you are fail");

printf("your grade is  %c.",grade);
switch(grade)
{

		case 'A':
		case 'a':
			printf("Excellent work!");
			break;

		case 'B':
		case 'b':
			printf("Well done.");
			break;


		case 'C':
		case 'c':
			printf("Good job.");
			break;

		case 'D':
		case 'd':
			printf("you passed,but you could do better.");
			break;

		case 'E':
		case 'e':
			printf("you could do better.");
			break;

		case 'F':
		case 'f':
			printf("soory,you failled.");
			break;



     }

   if(grade>='A' && grade<='E')
    {
		  printf("you are eligible for the next level..");
    }
    else
    {
		 printf("please try again next time.. ");
    }

getch();


}
