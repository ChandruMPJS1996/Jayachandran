#include<stdio.h>
#include<conio.h>
void main()
{
	int i,m;
	char a[10];
  clrscr();
	scanf("%s",a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		printf("\n %c",a[i]);
	}
	return 0;
  getch();
  }
