#include<stdio.h>
#include<string.h>
int main(){
    char arr[30]="hello ";
    char *ptr="avinash";
    strcat(arr,ptr);
    printf("string of arr is:%s",arr);
    
    return 0;
}