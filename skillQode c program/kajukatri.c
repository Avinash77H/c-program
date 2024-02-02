#include <stdio.h>

int main()
{ int i,j,n,a,x,k,nst,nsp,num,moj,l,ml;
    printf("enter number of row:");
    scanf("%d",&n);
   nsp=n/2;
   nst=1;
   ml=n/2+1;
   for (i=1;i<=n;i++)
   {  
       for(j=1;j<=nsp;j++)
       {
               printf(" ");
       }  
        
        for (k=1;k<=nst;k++)
       {
                printf("*");
                
       }
       if(i<ml)
       {
           nsp--;
           nst=nst+2;
       }
       else
       {
           nsp++;
           nst=nst-2;;
       }
     
        printf("\n");
   }    
       
       
       


    return 0;
}
