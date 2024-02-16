#include <stdio.h>
void table(int *ptr, int n,int end)
{
    for (int i = 0; i < end; i++)
    {
        ptr[i]=n*(n+1);
    }
    
    for (int i = 0; i < end; i++)
    {
            printf("%d x %d= %d\n",n,(i+1), ptr[i]);
        
    }
    printf("\n");
    printf("* * * * *   \n");
}
int main()
{
    int arr[10];
    table(arr,5,10);
    table(arr,7,10);
    table(arr,9,10);
    return 0;
}