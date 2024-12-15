#include<stdio.h>
#include<conio.h>
void main(){
  /*
      1 2 3 4 5
      2 3 4 5
      3 4 5
      4 5
      5   */
      int i;
      int j;
      clrscr();
      for(i=1;i<=5;i++)
      {
       for(j=i;j<=5;j++)
       {
		if(i%2!=0)
		{
		      (j%2==0)
				?printf("%c",j+96)
				:printf("%c",j+64);
		}
		else
		{
		    (j%2==0)
			?printf("%d",j)
			:printf("%c",j+64);
		}
       }
       printf("\n");
      }
      getch();
}
