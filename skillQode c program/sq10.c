#include <stdio.h>
int main()
{  
    float prize,interest,notice_time,formula;
    printf("enter product prize:");
    scanf("%f",&prize);
    
    printf("enter   percetage of interest:");
    scanf("%f",&interest);
    
    printf("enter year in notice_time:");
    scanf("%f",&notice_time);
    
    formula=(prize*interest*notice_time)/100;
    
    printf(" simple interest:%.2f",formula);

    return 0;
}
