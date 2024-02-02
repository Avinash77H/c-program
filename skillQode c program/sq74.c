#include<stdio.h>
 int main ()
 {  int i,j,sum;
 int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
 sum=0;
 for (i=0;i<3;i++)
 {
	 for(j=0;j<3;j++)
		 if(i==j)                         // for digonal sum
	 {
		 printf(" %d",arr[i][j]);        // upper triangle sum is if(i<j)
		 sum=sum+arr[i][j];              // lower triangle sum is if(i>j)
	 }
	 printf("\n");
 }
 
 printf(" digonal sum is:%d",sum);
 return 0;
 }
 