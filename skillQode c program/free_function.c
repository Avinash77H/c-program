#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int *ptr2;
    ptr=(int *)malloc(500*sizeof(int));
    for(int i=0;i<500;i++)
    {
        ptr2=(int *)malloc(500*sizeof(int));
        printf("enter value of element %d is :\n",i);
        scanf("%d",&ptr[i]);
        free(ptr2);
        // free function every loop accure free alloction memory which create memory by ptr2 malloc function//
    }
    for(int i=0;i<4;i++)
    {
        printf("print value of element %d is: %d\n",i,ptr[i]);
    }
    return 0;
}