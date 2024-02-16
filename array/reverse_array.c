#include <stdio.h>
void reverseArray(int *ptr, int n)
{
    for (int i = 0; i < (n / 2); i++)
    {
        int temp;
        temp = ptr[i];
        ptr[i] = ptr[n - i - 1];
        ptr[n - i - 1] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5,6,7,8,9,10};
    reverseArray(arr,10);
    printf("reverse array is: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}