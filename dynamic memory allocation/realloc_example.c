#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
    for(int i=0;i<5;i++){
        printf("enter value of %d element:",i);
        scanf("%d",&ptr[i]);
    }
 //here realloc using increase capasity store array size of 5 to 10
    ptr=realloc(ptr,10*sizeof(int));
    for(int i=0;i<10;i++){
        printf("enter value of %d element:",i);
        scanf("%d",&ptr[i]);
    }

    return 0;
}