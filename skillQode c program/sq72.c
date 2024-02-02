#include<stdio.h>
 int main ()
 {  int i,j,sum;
 int arr[3][2]={{1,2},{3,4},{5,6}};
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
 