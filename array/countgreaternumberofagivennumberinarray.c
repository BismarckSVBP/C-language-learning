#include <stdio.h>

int main()
{
    int arr[7] = {3, 25, 37, 13, 64, 76, 84};
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > 35)
        {
            printf("%d ", arr[i]);
            count++;
        }
    }
    printf("\n%d", count);
    return 0;
}