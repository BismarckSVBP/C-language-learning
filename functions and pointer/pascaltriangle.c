
#include <stdio.h>

int factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int p;
    int n, r;
    printf("Enter p : ");
    scanf("%d", &p);
    for (int i = 0; i <= p; i++)
    {

        for (int k = 0; k <= p - i; k++)
        {
            printf(" ");
        }

        n = i;

        for (int j = 0; j <= i; j++)
        {
            r = j;
            int nfact = factorial(n);

            int rfact = factorial(r);

            int nrfact = factorial(n - r);

            int ncr = nfact / (rfact * nrfact);
            printf("%d ", ncr);
        }
        printf("\n");
    }

    return 0;
}