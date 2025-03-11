#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if ((n + 1) % 2 == 0)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == j || (i+j) == (n+1))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        else
        {
            printf("Enter a Valid(odd) number");
            break;
        }
    }
    return 0;
}