#include <stdio.h>

int main()
{
    int arr[5] = {36, 35, 76, 35, 10};
    for (int i = 0; i < 5; i++)
    {
 printf("%d\n", &arr[i]);
        printf("%p\n", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {

        printf("%d\n", &arr[i]);
    }

    return 0;
}
