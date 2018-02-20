#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,k;
  clrscr();
	scanf("%d %d",&i,&k);
	i=i^k;
	k=i^k;
	i=i^k;
	printf("%d %d",i,k);
	return 0;
  getch();
}
