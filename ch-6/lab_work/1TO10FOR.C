#include<stdio.h>
#include<conio.h>
main()
{
  int n;
  int i;
  clrscr();
  printf("enter any number:");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
	printf("%d\t",i);
  }
  getch();

}