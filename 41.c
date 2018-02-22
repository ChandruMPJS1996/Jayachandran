#include <stdio.h>
#include<conio.h>
void main()
{
	char a[50];
  clrscr();
	scanf("%s",a);
	int n,i;
	scanf("\n%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%s",a);
	}
	return 0;
  getch();
}
