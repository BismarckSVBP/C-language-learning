#include <stdio.h>

int main()
{
    int arr[5] = {45, 50, 24, 34, 3};
    int brr[5];
    int i = 0, j = 4;
    while (i < 5)
    {
        int temp = 4 - i;

        printf("%d ", arr[temp]);
        i++;
        j--;
    }

    return 0;
}
