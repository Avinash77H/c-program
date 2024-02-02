#include <stdio.h>
int main()
{ int mark;

    printf("enter student mark out of 100:");
    scanf("%d",&mark);
    
    
    if(mark<=35 )
{
    printf(" student fail:%d",mark);
} 
    
    else
    {
        printf(" student are pass:%d",mark);
    }
    return 0;
}
