#include <stdio.h>
int main()
{ int A,B;
   printf("enter a value of A:");
   scanf("%d",&A);
   
    printf("enter a value of B:");
   scanf("%d",&B);
   
    if (A<B)
    {
        printf("A is smallest:%d",A);
       
    }
    else
    {
        printf("B is smallest:%d",B);
        
    }
    return 0;
}
