#include <stdio.h>
struct vector
{
    int x;
    int y;
};
int main()
{
    struct vector v1, v2;
    v1.x = 12;
    v1.y = 18;
    printf("x dimention is:%d and y dimention is:%d\n", v1.x, v1.y);

    v2.x = 23;
    v2.y = 34;
    printf("x dimention is:%d and y dimention is:%d\n", v2.x, v2.y);

    return 0;
}