#include <stdio.h>

int main()
{   float radius,formula;
    printf("enter value of radius:");
    scanf("%f",&radius);
    
    formula=3.14*radius*radius;
    
    printf("area of circle:%.2f",formula);

    return 0;
}
