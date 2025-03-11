#include <stdio.h>

void fun(int arr[])
{
    arr[3] = 19;
}
int main()
{
    int arr[5] = {4, 5, 3, 7, 9};
    printf("%d\n", arr[3]);
    fun(arr);
    printf("%d", arr[3]);
    return 0;
}
