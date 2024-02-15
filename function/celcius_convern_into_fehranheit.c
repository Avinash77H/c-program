#include<stdio.h>
float fehrenheit(float celsius){
    float x;
    x= celsius*(9/5)+32;
    return x;
}
int main(){
    float celsius;
    printf("enter value of celsius:");
    scanf("%f",&celsius);
    printf("fehrenheit is:%f",fehrenheit(celsius));
    return 0;
}