#include <stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{
char ch[100];
int i,k,count=0;
clrscr();
gets(ch);
for(k=0;ch[k]!='\0';++k)

{
	
}
for(i=0;i<k;i++)

{

	if(ch[i]==','||ch[i]==' '||ch[i]=='.'||ch[i]=='!'||ch[i]=='%'||ch[i]=='&')
  
	count++;
  
}

printf("%d",count);

	return 0;
  getch();
  }
  
