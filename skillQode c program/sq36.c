
#include <stdio.h>

// this sequence know as fibonacci sequence//

int main()
{   
    int a=0,b=1,c,i,n; 

 printf("Enter the number of elements:");    
 scanf("%d",&n); 
 
 
 
 for(i=1;i<=n;i++)  //i=1
 { 
    printf(" %d",a); //a=0
  c=a+b;            //c=1
  a=b;              //a=b
  b=c;              //b=1
 }  
     
     

    return 0;
}
