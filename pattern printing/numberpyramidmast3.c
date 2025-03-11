
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
        printf("%d", m);
    }
    printf("\n");

    for (int i = 1; i <= n - 1; i++)
    {

        for (int j = 1; j <= nst; j++)
        {
            printf("%d", j);
        }
        nst--;

        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        nsp += 2;

        for (int l = 1; l <= nst2; l++)
        {

            printf("%d", nst2 - l + 1);
        }
        nst2--;

        printf("\n");
    }

    return 0;
}