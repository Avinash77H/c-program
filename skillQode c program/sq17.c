#include <stdio.h>
int main()
{ int a;
   printf("enter a value of a:");
   scanf("%d",&a);
   
         if (a%5==0 && a%3==0)
    {
        printf("value is divisible by five or three" );
       
    }
    else
    {
        printf("value is not divisible by five or three");
        
    }
    return 0;
}
