#include<stdio.h>
float average(int a,int b,int c){
    float x;
    x=(float)(a+b+c)/3;
    return x;
}
int main(){
    
    printf("your average is:%.1f",average(3,2,3));
    return 0;
}