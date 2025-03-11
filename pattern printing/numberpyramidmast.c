//by me




#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int nsp = 0;
    int nst = n;
    int nst2 = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        nst--;
        for (int k = 0; k <= nsp - 2; k++)
        {
            printf("#");
        }
        nsp += 2;
        if (i == 1)
        {
            for (int p = 1; p <= n - 1; p++)
            {
                printf("*");
            }
        }
        else
        {
            for (int l = 1; l <= nst2; l++)
            {
                printf("*");
            }
            nst2--;
        }

        printf("\n");
    }

    return 0;
}



























//by master

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int nsp = 1;
    int nst = n - 1;
    int nst2 = n - 1;
    for (int m = 1; m <= 2 * n - 1; m++)
    {
        printf("*");
    }
    printf("\n");

    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        nst--;
        for (int k = 1; k <= nsp; k++)
        {
            printf("#");
        }
        nsp += 2;

        for (int l = 1; l <= nst2; l++)
        {
            printf("*");
        }
        nst2--;

        printf("\n");
    }

    return 0;
}