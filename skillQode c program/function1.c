#include<stdio.h>
void addition(int a,int b);
int subtraction(int a, int b);
int multiplication(int a,int b);
int division(int a, int b);
float simple_interest(int prize,int interest,int mudat);
int main()
{  
 int prize,interest,mudat;
    printf("enter prize value :");
    scanf("%d",&prize);
	printf("enter interest value :");
	scanf("%d",&interest);
	printf("enter time value :");
	scanf("%d",&mudat);
	
	
	

	float x=simple_interest( prize, interest, mudat);
	printf("%f",x);

return 0;
}
void addition(int a,int b)
{
	
	printf("%d",a+b);
	
}
int subtraction(int a,int b)
{
	
	return a-b;
	
}
int multiplication(int a,int b)
{
	
	return a*b;
	
}
int division(int a,int b)
{
	
	return a/b;
	
}
float simple_interest(int prize,int interest,int mudat)
{
	float result=(prize*interest*mudat)/100;
	return result;
}