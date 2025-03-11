#include <stdio.h>

int main()
{
    int arr[7] = {50, 26, 40, 36, 37, 2, 74};
    int count = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = i; j < 7; j++)
        {
            if (arr[i] + arr[j] == 76 && arr[i] != arr[j])
            {
                printf("the pairs are %d & %d\n",arr[i] , arr[j]);
                count++;
            }
        }
    }
    printf("\n%d", count / 2);
    return 0;
}


// #include <stdio.h>

// int main()
// {
//     int arr[7] = {50, 6, 11, 1, 73, 66, 84};
//     int count = 0;
//     for (int i = 0; i < 7; i++)
//     {
//         for (int j = i+1; j < 7; j++)
//         {
//             if (arr[i] + arr[j] == 12)
//             {
//                 count++;
//             }
//         }
//     }
//     printf("\n%d", count);
//     return 0;
// }