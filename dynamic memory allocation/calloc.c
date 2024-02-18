#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
 //calloc give a default zero value of all element which is allowcate
 //by calloc
    ptr=(int *)calloc(6,sizeof(int)); 
    
    for(int i=0;i<6;i++){
        printf("the value of  index %d is:%d\n",i,ptr[i]);
       
    }

    return 0;
}