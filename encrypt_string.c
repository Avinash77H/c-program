#include<stdio.h>
void encrypt(char *string){
   char *ptr=string;
    while(*ptr!='\0'){
        *ptr=*ptr+1;
        ptr++;

    }
}
int main(){
    char c[]="avinash";
    encrypt(c);
   printf("encrypt string is:%s",c);
    return 0;
}