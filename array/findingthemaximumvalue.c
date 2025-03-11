// only for +ive values of an array

// #include <stdio.h>

// int main()
// {
//     int arr[7] = {45, 86, 500,400,600, 1, 78};
//     int max = -1;
//     for (int i = 0; i < 7; i++)
//     {
//        if(max<arr[i]){
//         max=arr[i];
//        }
//     }
//     printf("%d", max);
//     return 0;
// }

// for +ive & -ive both number(method-1)

// #include <stdio.h>

// int main()
// {
//     int arr[7] = {-45, 86, -500,400,-600, -1, -78};
//     int max = arr[0];
//     for (int i = 0; i < 7; i++)
//     {
//        if(max<arr[i]){
//         max=arr[i];
//        }
//     }
//     printf("%d", max);
//     return 0;
// }

// for +ive & -ive both number(method-2)

#include <stdio.h>
#include<limits.h>
int main()
{
    int arr[7] = {-45, 86, -500,400,-600, -1, -78};
    int max = INT_MIN;//SABSE Choota number
    for (int i = 0; i < 7; i++)
    {
       if(max<arr[i]){
        max=arr[i];
       }
    }
    printf("%d", max);
    return 0;
}
