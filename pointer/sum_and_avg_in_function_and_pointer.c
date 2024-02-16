#include<stdio.h>
void sumAndavg(int a,int b,int c,int *sum,float *avg){
    *sum=a+b+c;
    *avg=(float)*sum/3;
}
int main(){
    int sum;
    float avg;
    sumAndavg(1,2,2,&sum,&avg);
    printf("sum is:%d\n",sum);
    printf("average is:%.1f",avg);
    return 0;
}