#include <stdio.h>

int main()
{
    char i;
    for (i='A';i<='Z';++i)
    {
        printf("%c-%d\t",i,i);
    }

    return 0;
}
