#include<stdio.h>
int main()
{  int i,count;
char str[50];
printf("enter string value here:");
gets(str);

count=0;
i=0;
while(str[i]!='\0')
{
	count++;
	i++;
}


printf("lenght:%d",count);

return 0;
}