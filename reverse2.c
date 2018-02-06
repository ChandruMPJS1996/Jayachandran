#include<stdio.h>
#include<string.h>
main()
{
char str[20];
printf("enter the string");
scanf("%s",&str);
strev(str);
printf("the reversed string is = %s",str);
getch();
}
