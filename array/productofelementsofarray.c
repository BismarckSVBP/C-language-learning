#include <stdio.h>

int main()
{
    int arr[5] = {5, 6, 5, 9, 8};
    int a = 1;
    for (int i = 0; i < 5; i++)
    {
        a = a * arr[i];
    }
    printf("%d", a);
    return 0;
}