#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[10],s2[20];
	int i,j;
  clrscr();
	gets(s1);
	gets(s2);
	i=strlen(s1);
	for(j=0;s2[j]!='\0';i++,j++)
	{
		s1[i]=s2[j];	
	}
	s1[i]='\0';
	puts(s1);
	return 0;
  getch();
}
