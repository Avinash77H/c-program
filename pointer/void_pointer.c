#include<stdio.h>
int main(){
    void *ptr;
    int a=7;
    float b=7.7;
    char c='A';
    // ptr=&a;
    // printf("value of ptr:%d\n",*(int *)ptr);
// here(int *) we need type cast pointer because ptr is void pointer
    
    // ptr=&b;
    // printf("value of ptr:%f\n",*(float *)ptr);
    ptr=&c;
    printf("value of ptr:%c\n",*(char *)ptr);
    // help to void pointer access three diferent data type value
    // this is benifit void pointer
    return 0;
}