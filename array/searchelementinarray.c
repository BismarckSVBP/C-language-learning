#include <stdio.h>

int main()
{

    int arr[7] = {21, 31, 42, 55, 63, 21, 65};

    int x = 43;

    int a = 0;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] == x)
        {
            printf("%d is present in the array & it's index is %d.\n", x, i);
        }
        else
        {
            a++;
        }
    }
    if (a == 7)
        printf("%d is not present in the array.", x);
    return 0;
}

// #include <stdio.h>

// int main()
// {

//     int n;
//     printf("Enter length of array : ");
//     scanf("%d", &n);
//     int arr[n];
//     for (int p = 0; p < n; p++)
//     {
//         printf("Enter %dth element of array : ", p);
//         scanf("%d", &arr[p]);
//     }
//     int x;
//     printf("Enter element for which searching process is to be done in the array : ");
//     scanf("%d", &x);
//     int a = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == x)
//         {
//             printf("%d is present in the array & it's index is %d.\n", x, i);
//            
//         }
//         else
//         {
//             a++;
//         }
//     }
//     if (a ==n)
//         printf("%d is not present in the array.", x);
//     return 0;
// }
