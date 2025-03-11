#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter %dth element of array : ", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {

        printf("%d ", a[i]);
    }
    printf("\n");

    for (int i = 0; i <= n - 2; i++)
    {

        for (int j = i + 1; j <= n - 1; j++)
        {
            if (a[i] == a[j])
            {
                printf("%d", a[j]);
                printf("%d", i);
                printf("%d", j);

                printf("\n");
            }
        }
    }

    return 0;
}