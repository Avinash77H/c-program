#include<stdio.h>
 int main ()
 {  int i,j,sum;
 int arr[3][3]={{1,2,3},{0,5,6},{0,7,8}};

 for (i=0;i<3;i++)
 {
	 for(j=0;j<3;j++)
	 {
		 printf(" %d",arr[i][j]);
		 
	 }
	 printf("\n");
 }
 
 return 0;
 }
 