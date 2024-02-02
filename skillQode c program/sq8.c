#include <stdio.h>
int main()
{  
    float length,width,formula;
    printf("enter value of lenght:");
    scanf("%f",&length);
    
    printf("enter value of width:");
    scanf("%f",&width);
    
    formula=length*width;
    
    printf("area of rectangle:%.2f",formula);

    return 0;
}
