
#include <stdio.h>

int main()
{
    int n, r;
    printf("Enter n : ");
    scanf("%d", &n);

    printf("Enter r : ");
    scanf("%d", &r);
    int nfact = 1;
    for (int i = 2; i <= n; i++)
    {
        nfact = nfact * i;
    }

    int rfact = 1;
    for (int i = 2; i <= r; i++)
    {
        rfact = rfact * i;
    }
    int nrfact = 1;
    for (int i = 2; i <= n - r; i++)
    {
        nrfact = nrfact * i;
    }
    int ncr = nfact / (rfact * nrfact);
    printf("%d", ncr);
    return 0;
}