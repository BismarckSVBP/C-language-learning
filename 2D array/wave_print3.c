#include <stdio.h>

int main()
{

    int m, n;
    printf("Enter Number of rows of 1st matrix : ");
    scanf("%d", &m);

    printf("Enter Number of columns of 1st matrix: ");
    scanf("%d", &n);

    // Input of matrix-1

    int arr[m][n];
    for (int i = 0; i < m; i++)
    {

        for (int j = 0; j < n; j++)
        {
            printf("Enter arr[%d][%d] : ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                printf("%d ", arr[j][i]);
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", arr[j][i]);
            }
        }

        printf("\n");
    }

    return 0;
}
