

#include <stdio.h>

int main()
{
    int n,i,j,k,nst,nsp,ml,fl,star,l;
    printf("enter value of row:");
    scanf("%d",&n);
    
    
    ml=n/2+1;
    
    for(fl=1;fl<=n;fl++)
    {
        printf("*");
    }
    printf("\n");
    
    nst=n/2;
    nsp=1;
    star=n/2;
    
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=nst;j++)
        {
            printf("*");
        }
        for(k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        for(l=1;l<=star;l++)
        {
            printf("*");
        }
       
        if(i<ml-1)
        {
          nst--;
          nsp=nsp+2;
          star--;
        }
        else
        {
           nst++;
          nsp=nsp-2;
          star++;
        }
        printf("\n");
        
    }

    return 0;
}
