#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10];
	scanf("%s",a);
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
  getch();
}
