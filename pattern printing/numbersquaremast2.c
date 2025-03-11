
#include <stdio.h>

    int main()
    {
        int n;
        printf("Enter a Number : ");
        scanf("%d", &n);
        for (int i = 1; i <= 2 * n - 1; i++)
        {
            for (int j = 1; j <= 2 * n - 1; j++)
            {
                int min;
                int a = i;
                if (i > n)
                {
                    a = 2 * n - i;
                }

                int b = j;
                if (j > n)
                {
                    b = 2 * n - j;
                }
                if (a > b)
                {
                    min = b;
                }
                else
                {
                    min = a;
                }
                printf("%d", min);
            }

            printf("\n");
        }
        return 0;
    }