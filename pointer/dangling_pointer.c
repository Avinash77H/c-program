#include<stdio.h>
int *f(){
    int a=9;
    return &a;
}
int main(){
    int *ptr;
    ptr=f();
    printf("%d\n",*ptr); // this is dangling pointer
 // its give a error and tell function return addresh of local variable


 
//     int *ptr=(int *)malloc (1*sizeof(int));
//     *ptr=10;
//     printf("ptr is:%d\n",*ptr);
//      free(ptr);
// // here free allocate memory but ptr still have a addresh 
// // this ptr called a dangling pointer
// // printf("value of ptr:%d\n",ptr); if print these give a some grab value
//     //  also good practice of ptr give a null
//     ptr=NULL;
//      printf("value of ptr:%d\n",ptr);
    
    return 0;
}