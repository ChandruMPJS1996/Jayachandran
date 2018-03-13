#include<stdio.h>
#include<conio.h> 
void main() 
{
	int num;
  clrscr();
	printf("\n enter the number from 1 to 3");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
		printf("\none");
		break;
		case 2:
		printf("\ntwo");
		break;
		case 3:
		printf("\nthree");
		break;
		default:
		printf("\n enter numbers from 1 to 3");
	}
	return 0;
  getch();
  }
