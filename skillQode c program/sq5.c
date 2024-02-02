#include <stdio.h>
int main()
{ 
    float celsius,fahrenheit;
    printf("enter celsius:");
    scanf("%f",&celsius);
    
    fahrenheit=(celsius*1.8)+32;  // formula fahrenheit=(c*9/5)+32
    
    printf("%.2f",fahrenheit);
    
    return 0;
}
