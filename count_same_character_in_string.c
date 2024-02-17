#include<stdio.h>
int sameCount(char *arr,char a){
    char *ptr=arr;
    int count=0;
    while(*ptr!='\0'){
        if(*ptr==a){
            count++;
        }
        ptr++;
    }
    return count;
}
int main(){
    char arr[]="avinash77";
    int x=sameCount(arr,'a');
    printf("same character is:%d",x);
    return 0;
}