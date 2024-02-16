#include<stdio.h>
int main(){
    int a=30;
    int *ptr1;
    int **ptr2;
    ptr1=&a;
    ptr2=&ptr1;
    printf("print valuo a help of pointer to pointer:%d",**ptr2);
    
    return 0;
}