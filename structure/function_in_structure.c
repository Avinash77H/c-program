#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[50];
};
void showdata(struct employee x){
    printf("x code is:%d\n",x.code);
    printf("x salary is:%f\n",x.salary);
    printf("x name is:%s\n",x.name);
}
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    
    ptr->code=777;
    ptr->salary=23.23;
    strcpy(ptr->name,"avinash rakholiya");
    showdata(e1);

    
    return 0;
}