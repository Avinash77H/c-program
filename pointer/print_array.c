#include <stdio.h>
void printarray(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("the value of %d is %d \n", i, *(ptr + i));
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printarray(arr, 5); // where arr is addresh of zero index element
    return 0;
}