// IF MIDDLE LINE NUMBER IS GIVEN
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = 2; i <= n; i++)
    {

        for (int k = 1; k <= i - 1; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 2 * (n - i) + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// IF TOTAL NUMBER OF LINES ARE GIVEN

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    if (n % 2 != 0)
    {
        for (int i = 1; i <= (n + 1) / 2; i++)
        {
            for (int j = 1; j <= ((n + 1) / 2) - i; j++)
            {
                printf(" ");
            }

            for (int k = 1; k <= 2 * i - 1; k++)
            {
                printf("*");
            }

            printf("\n");
        }

        for (int i = (n + 3) / 2; i <= n; i++)
        {

            for (int k = 1; k <= i - ((n + 1) / 2); k++)
            {
                printf(" ");
            }

            for (int j = 1; j <= 2 * (n - i) + 1; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    else
    {
        printf("Enter a valid(odd) number.");
    }
    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int nsp = n / 2;
    int nst = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        if (i <= ((n / 2)))
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }
        printf("\n");
    }

    return 0;
}
