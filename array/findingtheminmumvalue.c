

// // for +ive & -ive both number(method-1)

// #include <stdio.h>

// int main()
// {
//     int arr[7] = {-45, 86, -500,400,-600, -1, -78};
//     int  min = arr[0];
//     for (int i = 0; i < 7; i++)
//     {
//        if(min>arr[i]){
//         min=arr[i];
//        }
//     }
//     printf("%d", min);
//     return 0;
// }

// for +ive & -ive both number(method-2)

#include <stdio.h>
#include<limits.h>
int main()
{
    int arr[7] = {-45, 86, -500,400,-600, -1, -78};
    int min = INT_MAX;//SABSE Bada number
    for (int i = 0; i < 7; i++)
    {
       if( min>arr[i]){
        min=arr[i];
       }
    }
    printf("%d",  min);
    return 0;
}
