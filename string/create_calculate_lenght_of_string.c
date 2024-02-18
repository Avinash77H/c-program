#include<stdio.h>
int lenght(char *string){
    char *ptr=string;
    int count=0;
    while(*ptr!='\0'){
        count++;
        ptr++;
    }
    
    return count;
}
int main(){
    char string[]="avinash";
    int x;
    x=lenght(string); // alos pass parameter is &string[0] in lengh function
    printf("string lenght is:%d",x);
    return 0;
}