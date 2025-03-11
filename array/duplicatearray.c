#include <stdio.h>

int main()
{
    //  int arr[7] = {8, 4, 3, 4, 7, 8, 5};
    // int n = 7;

    int n;
    printf("Enter length of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int p = 0; p < n; p++)
    {
        printf("Enter %dth element of array : ", p);
        scanf("%d", &arr[p]);
    }

    int a = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf(" %d is duplicate element in the array.\n", arr[i]);

                a++;
                break;
            }
        }
    }
    if (a == 0)
    {
        printf(" There is no duplicate element in the array.");
    }

    return 0;
}
