#include<stdio.h>
 int main ()
 { int i,sum,even_sum;
 int arr[]={56,1,56,43,55,5,32,23,23,9};
 
 sum=0;
 for(i=0;i<10;i++)// for element

	  
 {
	  printf(" %d",arr[i]);
		 sum=sum+arr[i];
 }
  printf("\nelement sum:%d",sum);

 return 0;
 }
 