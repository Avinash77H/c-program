#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    float salary;
    char name[50];
}x;

void showdata(struct employee avi){
    printf("avi code is:%d\n",avi.code);
    printf("avi salary is:%f\n",avi.salary);
    printf("avi name is:%s\n",avi.name);
}

int main(){
    x e1; // x replace by struct employee help of typedef
    x *ptr;
    ptr=&e1;
    
    ptr->code=777;
    ptr->salary=23.23;
    strcpy(ptr->name,"avinash rakholiya");
    showdata(e1);

    
    return 0;
}