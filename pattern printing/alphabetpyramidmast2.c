
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int nsp = 1;
    int nst = n - 1;
    int nst2 = n - 1;
    for (int m = 65; m <= 2 * n + 63; m++)
    {
        printf("%c", (char)m);
    }
    printf("\n");

    for (int i = 1; i <= n - 1; i++)
    {
        int a = 65;
        for (int j = 1; j <= nst; j++)
        {
            printf("%c", (char)a);
            a++;
        }
        nst--;

        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
            a++;
        }
        nsp += 2;

        for (int l = 1; l <= nst2; l++)
        {

            printf("%c", (char)a);
            a++;
        }
        nst2--;

        printf("\n");
    }

    return 0;
}