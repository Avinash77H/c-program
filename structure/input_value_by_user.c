#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[50];
};
int main(){
    struct employee avinash={33,23.23,"avinash"};   // give input easy 
    struct employee milan={11,23.64,"milan vaghasiya"};
    printf("avinash code is:%d\n",avinash.code);
    printf("avinash salary is:%f\n",avinash.salary);
    printf("avinash name is:%s\n",avinash.name);

    printf("milan code is:%d\n",milan.code);
    printf("milan salary is:%f\n",milan.salary);
    printf("milan name is:%s\n",milan.name);

    
    return 0;
}