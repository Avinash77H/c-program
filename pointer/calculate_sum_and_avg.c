#include<stdio.h>
void sumAndavg(int a,int b,int *sum,float *avg){
     *sum=a+b;
     *avg= (float)*sum/2;
}
int main(){
    int i=3,j=8;
    int sum;
    float avg;
    sumAndavg(i,j,&sum,&avg);
    printf("sum is:%d\n",sum);
    printf("avg is:%.1f\n",avg);
    return 0;
}