#include <stdio.h>
int main()
{  
    float base,hight,formula;
    printf("enter value of base:");
    scanf("%f",&base);
    
    printf("enter value of hight:");
    scanf("%f",&hight);
    
    formula=(base*hight)/2;
    
    printf("area of triangle:%.2f",formula);

    return 0;
}
