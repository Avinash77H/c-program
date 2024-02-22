#include<stdio.h>
int avg(int arr[],int n);
int main(){
    int marks[]={14,59,29,50,90};
    int average;
    average=avg(marks,5);
    printf("student average is:%d\n",average);
    return 0;
}
int avg(int arr[],int n){
    int i,sum=0,average;
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    average=sum/n;
    return average;
}