
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


//by sumation approach




#include<stdio.h>

int main()
{
     int n;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int p = 0; p < n; p++)
    {
        arr[p]=p;
    }
int sum =0;

   for (int i = 0; i < n-1; i++)
    {
        sum = sum +arr[i];
    }

    int sum2 =0;
    
   for (int i = 0; i < n; i++)
    {
        sum2 = sum2 +arr[i];
    }
    int missingnumber = sum2 -sum ;
    printf("%d",missingnumber);
    return 0;

}