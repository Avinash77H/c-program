#include<stdio.h>
int main()
{  int i,j,k,count;
char str[50];
printf("enter string value here:");
gets(str);

count=0;
k=0;
while(str[k]!='\0')
{
	count++;
	k++;
}

for (i=0,j=count-1;i<j;i++,j--)
{
	char temp=str[i];
	str[i]=str[j];
	str[j]= temp;
}
puts("reverse string was:");
puts(str);


return 0;
}