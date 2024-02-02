
#include <stdio.h>
#include<math.h>


int main()
{  int i,n;
    printf("enter a number:");
    scanf("%d",&n);
     for(i=1; i<=n;i++) printf("%.0f\n",i*pow(2,(i-1))); /*formula:i*2^(i-1)
                                                           where i=1,2,3,..,n*/
         
     
     
     

    return 0;
}
