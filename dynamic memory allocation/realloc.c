#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)malloc(6*sizeof(int));
    for(int i=0;i<6;i++){
        printf("enter value of  index %d is:",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
        printf("the value of  index %d is:%d\n",i,ptr[i]);
       
    }
    // reallocate ptr using realloc()
    ptr=realloc(ptr,10*sizeof(int));
    for(int i=0;i<10;i++){
        printf("enter value of  index %d is:",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<10;i++){
        printf("the value of  index %d is:%d\n",i,ptr[i]);
       
    }
    // here realloc reuse before memory 


    return 0;
}