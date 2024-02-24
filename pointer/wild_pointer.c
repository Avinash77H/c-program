#include<stdio.h>
int main(){
    int* ptr;
    printf("%d",*ptr);
    // its call a wild pointer 
// ptr is uninitialize and try to dereference ptr is called wild poiter
    return 0;
}