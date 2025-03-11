// //method-1
// #include <stdio.h>

// int main()
// {
//     int arr[7] = {12, 4, 8, 16, 3, 5, 74};
//     int count = 0;
//     for (int i = 0; i < 7; i++)
//     {
//         for (int j = i; j < 7; j++)
//         {
//             for (int k = j; k < 7; k++)
//             {

//                 if (arr[i] + arr[j] + arr[k] == 12 && arr[i] != arr[j] && arr[i] != arr[k] && arr[j] != arr[k])
//                 {
//                     printf("the triplets are %d, %d & %d\n", arr[i], arr[j], arr[k]);
//                     count++;
//                 }
//             }
//         }
//     }
//     printf("\n%d", count);
//     return 0;
// }

// method-2
#include <stdio.h>

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int count = 0;
    for (int i = 0; i <= 7; i++)
    {
        for (int j = i + 1; j <= 7; j++)
        {
            for (int k = j + 1; k <= 7; k++)
            {

                if (arr[i] + arr[j] + arr[k] == 12)
                {
                    printf("the triplets are %d, %d & %d\n", arr[i], arr[j], arr[k]);
                    count++;
                }
            }
        }
    }
    printf("\n%d", count);
    return 0;
}
