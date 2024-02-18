#include<stdio.h>
int main(){
    int num;
    int num2;
    FILE *ptr;
    ptr=fopen("sample.txt","r");
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    printf("value of num is:%d\n",num);
    printf("value of num2 is:%d\n",num2);
    fclose(ptr);
    return 0;
}
