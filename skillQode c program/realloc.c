#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)malloc(4*sizeof(int));
    for(int i=0;i<4;i++)
    {
        printf("enter value of element %d is :\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<4;i++)
    {
        printf("print value of element %d is: %d\n",i,ptr[i]);
    }
    // realloc ptr using realloc()
    ptr=realloc(ptr,10*sizeof(int));
    for(int i=0;i<10;i++)
    {
        printf("enter value of element %d is :\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<10;i++)
    {
        printf("print value of element %d is: %d\n",i,ptr[i]);
    }
    return 0;
}