#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[50];
};
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    //(*ptr).code=77;// first *ptr is derefference and after.code is apply
                    //  (*ptr).code=77 it means e1.code=77
     // also use array opertor like ptr->code
    ptr->code=777;
    printf("code is:%d",e1.code);

    
    return 0;
}