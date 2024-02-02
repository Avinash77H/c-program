#include <stdio.h>
int main()
{ int i,j;
    for (i=1;i<=5;i++)
    {
        for(j=0;j<=i-1;j++)
        {
           printf("%c",i+64-j);
        }
        printf("\n");
    }

    return 0;
}
