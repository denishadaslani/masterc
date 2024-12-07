#include<stdio.h>
#include<conio.h>
main()
{
	int num,n;
	int rev=0;
	int rem;
	clrscr();
	printf("enter any number:\n");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
	  rem =n%10;
	  rev=rev*10+rem;
	  n=n/10;
	}
	if(rev==num)
	{
		printf("%d is palindrome",num);
	  }
	 else
	 {

		printf("%d is not palindrome",num);

	   }

	getch();
}
