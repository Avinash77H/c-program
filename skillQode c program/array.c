#include<stdio.h>
 int main ()
 {  int i,j,sum;
 int arr[3][3]={{1,2},{,5,6},{,7,8}};
 sum=0;
 for (i=0;i<3;i++)
 {
	 for(j=0;j<2;j++)
	 {
		 printf(" %d",arr[i][j]);
		 sum=sum+arr[i][j];
	 }
	 printf("\n");
 }
 
 printf("sum is:%d",sum);
 return 0;
 }
 