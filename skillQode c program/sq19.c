#include <stdio.h>
int main()
{ int a,b,c;

    printf("enter value of a:");
    scanf("%d",&a);
    
     printf("enter value of b:");
    scanf("%d",&b);
    
     printf("enter value of c:");
    scanf("%d",&c);
    
    if(a<b && c<b)
{
    printf(" largest value is b:%d",b);
} 
    if(a<c && b<c)
    {
        printf("largest value is c:%d",c);
    }
    else
    {
        printf(" largest value is a:%d",a);
    }
    return 0;
}
