#include<stdio.h>
void modify(char str1[],char str2[]){
    int i,lenght=0;
    for(i=0;str1[i]!='\0';i++){
        lenght=lenght+1;
    }
    printf("str1 lenght is:%d\n",lenght);
    str2[0]='R';// hear modify str2 first character
    printf("your string was:%s%s",str1,str2);
}
int main(){
    char str1[]="avinash";
    char str2[]="rakholiya";
    modify(str1,str2);
    return 0;
}