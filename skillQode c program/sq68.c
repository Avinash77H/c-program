#include<stdio.h>
 int main ()
 {  int total;
	 
  int mark[3];
 
 for(int i=0;i<3;i++)
 {
	 scanf("%d",&mark[i]);
 }
  total=0;
  for(int i=0;i<3;i++)
  {
	    printf(" %d",mark[i]);
		total=total+mark[i];
		
  }

 printf(" \ntotal mark:%d",total); 
int percentage=(total*100/300) ;

printf("\npercentage is:%d",percentage);

if(percentage<=35)
{
	printf("\ngrade D");
}
else if(percentage<=50)
{
	printf("\ngrade C");
}
else if(percentage<=70)
{
	printf("\ngrade B");
}
else if(percentage<=80)
{
	printf("\ngrade A");
}
else if(percentage<=100)
{
	printf("\ngrade A+");
}
 return 0;
 }
 