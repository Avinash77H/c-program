#include<stdio.h>
int main(){
    int a=123;
    int *ptr1;
    int **ptr2;
    ptr1=&a;
    ptr2=&ptr1;
    //print value of a using pointer to pointer
    printf("value of **ptr2 is:%d\n",**ptr2);
    
    return 0;
}