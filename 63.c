#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100];
  clrscr();
	gets(a);
	int i,count=1;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			count=count+1;
		}
	}
	printf("%d",count);
	return 0;
  getch();
}
