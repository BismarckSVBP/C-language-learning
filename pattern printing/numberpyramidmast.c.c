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
            printf("#");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }

        for (int l = 1; l <= i - 1; l++)
        {
            printf("%d", i - l);
        }
        printf("\n");
    }
    return 0;
}
