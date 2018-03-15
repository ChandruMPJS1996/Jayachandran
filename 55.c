#include<stdio.h>
#include<conio.h>
void main()
{
	int n,m,t;
  clrscr();
	scanf("%d %d",&n,&m);
	t=n*m;
	if(t%2==0)
	{
		printf("even");
	}
	else
	printf("odd");
	return 0;
  getch();
}
