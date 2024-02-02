#include<stdio.h>
int square_series(int n);
void pattern(int n);


int main()
{	
	pattern(10);
	
	
	
	return 0;
}
int square_series(int n)
 {
	 int i;
	 
	 
	 for(i=1;i<=n;i++)
	 {
		printf(" %d",i*i);
	 }
	 
	return i*i; 
	 
 }
 
 void pattern(int n)
 {
	 int i,j;
	 for(i=1;i<=n;i++)
	 {
		 for (j=1;j<=i;j++)
		 {
			printf("%d",j); 
		 }
			 printf("\n");
	 }
	 
 }