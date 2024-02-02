#include<stdio.h>
#include<math.h>
int infinity();
int odd();
int sum();
char charconvert();
int square_series();
int even_square();
int power();
int ipower();
int fibonaci();


int main()
{	
	int x;
	//infinity();
	//odd();
	//sum();
	//charconvert();
	//printf(" %c",charconvert());
	//square_series();
	
	//even_square();
	//printf(" %d",power());
	//printf(" %d",ipower());
	x=fibonaci();
	printf(" %d",x);
	
	
	
	
	return 0;
}

int infinity()
 {
	 int n,i;
	 printf("enter value of N:");
	 scanf("%d",&n);
	 for(i=-n;i<=n;i++)
	 {
		 printf(" %d",i);
	 }
	 return i;
 }
int odd()
 {
	 int n,i;
	 printf("enter value of N:");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
		 if(i%2!=0)
	 {
		 printf(" %d",i);
	 }
	 return i;
 }
 
int sum()
 {
	 int n,i,sum;
	 printf("enter value of N:");
	 scanf("%d",&n);
	 sum=0;
	 for(i=1;i<=n;i++)
		 if(i%2!=0)
	 {
		 
		 sum=sum+i;
	 }
	 
	 return sum;
 }
 
 char charconvert()
 {
	 char n;
	 printf("enter  any character value of n:");
	 scanf("%c",&n);

	
		 if(64<n && 91>n)
	 {
		 
		 return n+32;
	 }
	 	 else if(96<n && 123>n)
	 {
		 
		 return n-32;
	 }
	
 }
 
int square_series()
 {
	 int n,i;
	 printf("enter  any character value of n:");
	 scanf("%d",&n);
	 
	 for(i=1;i<=n;i++)
	 {
		printf(" %d",i*i);
	 }
	 
	return i*i; 
	 
 }
 
int even_square()
 {
	 int n,i;
	 printf("enter  any character value of n:");
	 scanf("%d",&n);
	 
	 for(i=1;i<=n;i++)
	 {
		 if(i%2!=0)
	 {
		printf(" %d",i);
	 }
	 else 
	 { 
		 printf(" %d",i*i);
	 }
	 }
 }
 
 int power()
 {
	 int n,i;
	 printf("enter value of n:");
	 scanf("%d",&n);
	 for(i=0;i<=n;i++)
	 {
		 printf(" %.0f",pow(2,i));
	 }
 }
 
 int ipower()
 {
	 int n,i;
	 printf("enter value of n:");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
		 printf(" %.0f",(i*pow(2,(i-1))));

	 }
	 
 }
 
 int fobonaci()
 {
	 int n,i,a=0,b=1,c;
	 printf("enter value of n:");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	{
	    return a;
	     c=a+b;
	     a=b;
	     b=c;
	
	}
	 
	 
 }