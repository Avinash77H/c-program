#include<stdio.h>
int main(){
    int *ptr1=NULL;
    int *ptr2;

    if(ptr1==NULL){
        printf("this pointer is null");
    }
    else{
    printf("%d\n",*ptr1);
       
    }
    // printf("%d\n",*ptr2); if this line run so program will crash
    // because ptr2 is undefined it means ptr2 not have any addresh


    return 0;
}