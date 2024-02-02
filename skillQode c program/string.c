
#include <stdio.h>

int main()
{
    char str[30];
    
	gets(str);
   printf("your input was:");
	puts(str);
	 int count=0;
	int k=0;
while(str[k]!='\0')
{
	k++;
	count++;
}

for (int i=0,j=count-1;i<=j;i++,j--)
{
	char temp=str[i];
	str[i]=str[j];
	str[j]=temp;
}

puts("the reverse string is:");
puts(str);
	
    return 0;
}

