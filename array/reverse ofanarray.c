#include <stdio.h>

int main()
{
    int arr[5] = {3, 5, 2, 4, 3};
    int brr[5];
    // for (int i = 0; i <= 4; i++)
    // {
    //     printf("%d", arr[i]);
    // }
    // printf("\n");

    // for (int i = 4; i >= 0; i--)
    // {
    //     printf("%d", arr[i]);
    //     brr[4 - i] = arr[i];
    // }
    // printf("\n");

    // for (int i = 0; i <= 4; i++)
    // {
    //     printf("%d", brr[i]);
    // }


//or

    for (int i = 0; i <= 4; i++)
    {
        brr[i] = arr[4 - i];
        printf("%d ", brr[i]);
    }

    return 0;
}