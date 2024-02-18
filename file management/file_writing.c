#include<stdio.h>
int main(){
    int num=777;
    FILE *ptr;
    ptr=fopen("avinash.txt","w");
    fprintf(ptr,"the number is :%d\n",num);
    fprintf(ptr,"thanks for using fprinf" );

    fclose(ptr);
    return 0;
}