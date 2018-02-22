#include <stdio.h>
#include<conio.h>
void main()
{
	int n;
  clrscr();
	scanf("%d",&n);
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==n)
		{
			printf("\n yes");
		}
	}
	
	return 0;
  getch();
}
