#include <stdio.h>

int main()
{
    int arr[5] = {45, 50, 24, 34, 3};
    int brr[5];

    for (int i = 0; i <= 4; i++)
    {

        brr[i] = arr[4 - i];
    }
    printf("\n");
    for (int i = 0; i <= 4; i++)
    {
        arr[i] = brr[i];
    }
    printf("\n");
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}