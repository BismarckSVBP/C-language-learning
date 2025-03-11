
#include <stdio.h>
#include <stdbool.h>
int main()
{
    // int arr[7] = {5, 4, 3, 4, 7, 8, 5};
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
        bool flag = false;
        for (int k = 0; k < i; k++)
        {

            if (arr[i] == arr[k])
            {
                flag = true;
            }
        }
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
        if (flag == false)
        {
            printf("The unique element is %d\n", arr[i]);
            a++;
            // break;
        }
    }
    if (a == 0)
        printf("There is no unique element in the array.");

    return 0;
}

// make the condition so that it prints all the unique number & also make else condition.