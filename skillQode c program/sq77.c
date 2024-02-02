#include <stdio.h>
#include<string.h>
int
main ()
{ char a[50],b[50],c[50];
int i,j;

printf("\nenter first string:");
gets(a);
printf("\nenter second string:");
gets(b);

i=0;
j=0;
while(a[i]!='\0')
{
	c[i]=a[i];
	i++;
}
while(b[j]!='\0')
{
	c[i]=b[j];
	i++;
	j++;
}
 c[i]='\0';
 //printf("merge string was:%s",c);
 puts(c);
 

	return 0;
}