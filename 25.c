#include <stdio.h>
#include<conio.h>
#include<math.h>
int main(void)
{
	int i, n,m;
  clrscr();
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++)
	{
		printf("%c\t",i);
	}
	return 0;
  getch();
}
