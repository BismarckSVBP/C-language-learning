//method-1



// #include <stdio.h>
// int main()
// {
//     int a[5] = {45, 50, 24, 34, 3};
//     int arr[5];
//     for (int l = 0; l < 5; l++)
//     {
//         arr[l] = a[l];
//         // printf("%d ", arr[l]);
//     }
//     printf("\n");
//     int brr[5];
//     for (int i = 0, j = 4; i < j; i++, j--)
//     {

//         arr[i] = arr[i];
//         arr[j] = arr[i];
//     }

//     for (int k = 0; k < 5; k++)
//     {
//         brr[k] = arr[k];
//         // printf("%d ", brr[k]);
//     }
//     for (int m = 0; m < 5; m++)
//     {
//         if (brr[m] != a[m])
//         {
//             printf("The given array is not palindrome. ");
//             break;
//         }
//     }
//     return 0;
// }





//method-2
#include <stdio.h>
int main()
{
    // int arr[5] = {45, 50, 24, 50, 5};
    int arr[5] = {45, 50, 24, 50, 45};
    int a = 0;

    for (int i = 0, j = 4; i < j; i++, j--)
    {

        if (arr[i] != arr[j])
        {
            printf("The given array is not palindrome. ");
            break;
        }
        else
        {
            a++;
        }
    }
    if (a > 0)
    {
        printf("The given array is palindrome. ");
    }

    return 0;
}