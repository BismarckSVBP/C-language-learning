
#include <stdio.h>

int main()
{
//integer array-->occupy 4byts by each elements
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("%p\n", &arr[i]);
    }

//character array-string-->occupy 1byts by each elements
    char brr[5] = {'a', 'b', 'c', 'd', '5'};

    for (int i = 0; i < 5; i++)
    {
        printf("%p\n", &brr[i]);
    }

    return 0;
}
