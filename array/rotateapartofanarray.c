// simple form of method
//  #include <stdio.h>

// void reverse(int arr[], int a, int b)
// {
//     for (int i = a, j = b; i < j; i++, j--)
//     {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
//     return;
// }
// int main()
// {
//     int arr[7] = {1, 2, 3, 4, 5, 6, 7};
//     reverse(arr, 0, 6);
//     reverse(arr, 0, 2);
//     reverse(arr, 3, 6);

//     for (int k = 0; k < 7; k++)
//     {
//         printf("%d ", arr[k]);
//     }
//     return 0;
// }

// extended form of method

#include <stdio.h>

void reverse(int arr[], int a, int b)
{
    for (int i = a, j = b; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int n;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int p = 0; p < n; p++)
    {
        printf("Enter %dth element of array : ", p);
        scanf("%d", &arr[p]);
    }
    int k;
    printf("Enter rotation times of array : ");
    scanf("%d", &k);
    k = k % n;
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
    return 0;
}
